# streamlit_app.py (CSV version)
import streamlit as st
import pandas as pd
import plotly.express as px
from pathlib import Path
from io import BytesIO

# Local imports
from src.data_prep import prepare, load_raw, basic_cleaning

st.set_page_config(page_title="ODS: Educação Superior — IDD (2023)", layout="wide")

DATA_RAW = "IDD_2023.xlsx"
DATA_PROCESSED = "data/processed/idd_processed.csv"

@st.cache_data
def load_data():
    # Try load processed, else prepare
    p = Path(DATA_PROCESSED)
    if p.exists():
        df = pd.read_csv(p, encoding='utf-8')
    else:
        df = prepare(DATA_RAW, str(p))
    return df

df = load_data()

st.title("ODS — Educação de Qualidade: Índice de Desenvolvimento Docente (IDD)")
st.markdown(
    """
Este app explora o dataset **IDD 2023** (base enviada pelo usuário).
Tema central: **Qualidade da docência no ensino superior** medida pelo IDD —
visualize distribuições, compare por estado/área e identifique cursos/IES com maiores desafios.
""")

# Sidebar filtros
st.sidebar.header("Filtros")
with st.sidebar.expander("Carregamento/Processamento"):
    st.write("Arquivo carregado automaticamente do workspace.")
    if st.button("Reprocessar dados (aplica limpeza novamente)"):
        df = prepare(DATA_RAW, DATA_PROCESSED)
        st.experimental_rerun()

# Select filters
years = sorted(df['Ano'].dropna().unique().tolist()) if 'Ano' in df.columns else []
areas = sorted(df['Área_de_Avaliação'].dropna().unique().tolist()) if 'Área_de_Avaliação' in df.columns else []
ufs = sorted(df['Sigla_da_UF'].dropna().unique().tolist()) if 'Sigla_da_UF' in df.columns else []
modalidades = sorted(df['Modalidade_de_Ensino'].dropna().unique().tolist()) if 'Modalidade_de_Ensino' in df.columns else []

year = st.sidebar.selectbox("Ano", options=["Todos"] + [str(y) for y in years], index=0)
area = st.sidebar.multiselect("Área de Avaliação", options=areas, default=[])
uf = st.sidebar.multiselect("UF", options=ufs, default=[])
modal = st.sidebar.multiselect("Modalidade", options=modalidades, default=[])

# Apply filters
df_f = df.copy()
if year and year != "Todos":
    df_f = df_f[df_f['Ano'] == int(year)]
if area:
    df_f = df_f[df_f['Área_de_Avaliação'].isin(area)]
if uf:
    df_f = df_f[df_f['Sigla_da_UF'].isin(uf)]
if modal:
    df_f = df_f[df_f['Modalidade_de_Ensino'].isin(modal)]

st.markdown("## KPIs gerais")
col1, col2, col3, col4 = st.columns(4)
col1.metric("Cursos (linhas únicas)", int(df_f['Código_do_Curso'].nunique()) if 'Código_do_Curso' in df_f.columns else df_f.shape[0])
col2.metric("Média IDD (contínuo)", round(df_f['IDD_Contínuo'].dropna().mean(), 3) if 'IDD_Contínuo' in df_f.columns else "N/D")
col3.metric("Mediana IDD", round(df_f['IDD_Contínuo'].dropna().median(), 3) if 'IDD_Contínuo' in df_f.columns else "N/D")
col4.metric("Total de Concluintes (inscritos)", int(df_f['Nº_de_Concluintes_Inscritos'].sum()) if 'Nº_de_Concluintes_Inscritos' in df_f.columns else "N/D")

st.markdown("## Distribuição do IDD")
if 'IDD_Contínuo' in df_f.columns:
    fig = px.histogram(df_f, x='IDD_Contínuo', nbins=40, title="Histograma do IDD (contínuo)")
    st.plotly_chart(fig, use_container_width=True)
else:
    st.write("Coluna IDD_Contínuo ausente no dataset.")

st.markdown("## IDD por UF (média)")
if 'Sigla_da_UF' in df_f.columns and 'IDD_Contínuo' in df_f.columns:
    agg = df_f.groupby('Sigla_da_UF', as_index=False)['IDD_Contínuo'].mean().sort_values('IDD_Contínuo', ascending=False)
    fig2 = px.bar(agg, x='Sigla_da_UF', y='IDD_Contínuo', title="Média do IDD por UF", labels={'IDD_Contínuo':'IDD (média)'})
    st.plotly_chart(fig2, use_container_width=True)
else:
    st.write("Colunas necessárias (Sigla_da_UF, IDD_Contínuo) ausentes.")

st.markdown("## Top 10 cursos (maior IDD)")
if 'Código_do_Curso' in df_f.columns and 'IDD_Contínuo' in df_f.columns and 'Nome_da_IES' in df_f.columns:
    top = df_f.sort_values('IDD_Contínuo', ascending=False).drop_duplicates(subset=['Código_do_Curso']).head(10)
    st.dataframe(top[['Código_do_Curso','Área_de_Avaliação','Nome_da_IES','Sigla_da_UF','IDD_Contínuo','IDD_Faixa']])
else:
    st.write("Colunas para top cursos ausentes.")

st.markdown("## Análise cruzada: participantes x IDD")
if 'Nº_de_Concluintes_Participantes' in df_f.columns and 'IDD_Contínuo' in df_f.columns:
    fig3 = px.scatter(df_f, x='Nº_de_Concluintes_Participantes', y='IDD_Contínuo', hover_data=['Nome_da_IES','Área_de_Avaliação'])
    st.plotly_chart(fig3, use_container_width=True)

st.markdown("## Tabela filtrada e download")
st.dataframe(df_f.head(500))

@st.cache_data
def to_csv_bytes(df):
    return df.to_csv(index=False).encode('utf-8')

csv_bytes = to_csv_bytes(df_f)
st.download_button("Download CSV (filtro atual)", data=csv_bytes, file_name="idd_filtered.csv", mime="text/csv")

st.markdown("---")
st.markdown("### Notas e instruções")
st.markdown(
    """
- O app utiliza o arquivo Excel presente no workspace (`/mnt/data/IDD_2023.xlsx`).
- Se desejar adicionar um mapa choropleth por UF, inclua um GeoJSON de estados do Brasil em `data/geojson/br_states.geojson` e adicione a seção correspondente no código.
- Para rodar localmente:\n\n```\npip install -r requirements.txt\nstreamlit run streamlit_app.py\n```\n\n""")
