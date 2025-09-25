# Projeto: ODS — Educação de Qualidade (IDD 2023)

Este repositório contém um app Streamlit para explorar o dataset **IDD 2023** (arquivo Excel fornecido). O foco é analisar a **qualidade da docência** (IDD) por curso, IES e UF.

## Estrutura
```
project_ods_educacao/
├─ data/ (gerado ao processar)
│  └─ processed/idd_processed.parquet
├─ src/
│  └─ data_prep.py        # funções de limpeza e processamento
├─ streamlit_app.py       # app principal
├─ requirements.txt
└─ README.md
```

## Rodando localmente
1. Crie um ambiente virtual e ative.
2. Instale dependências:
```bash
pip install -r requirements.txt
```
3. Garanta que o arquivo `IDD_2023.xlsx` esteja em `/mnt/data/` (como fornecido).
4. Rode:
```bash
streamlit run streamlit_app.py
```

## Funcionalidades
- Filtros por ano, área, UF e modalidade.
- KPIs: média/mediana do IDD, número de cursos, total de concluintes.
- Histogramas, barras por UF, scatter de participantes x IDD.
- Tabela filtrada com opção de download CSV.
- Instruções para adicionar mapa choropleth por UF (se GeoJSON estiver disponível).

## Considerações sobre tratamento de dados
- Script `src/data_prep.py` realiza limpeza básica: normalização de nomes de colunas, conversão de tipos, tratamento de nulos e exportação para `parquet` para leitura rápida.
- Recomenda-se expandir validações (por exemplo: checar duplicados reais, validação de códigos IBGE para municípios, tratamento de outliers e imputação quando necessária).

## Próximos passos sugeridos
- Adicionar mapas (choropleth) usando GeoJSON do IBGE.
- Implementar dashboards temporais (séries históricas) se houver múltiplos anos.
- Adicionar autenticação, controle de usuários e deploy (Streamlit Cloud / Render).
