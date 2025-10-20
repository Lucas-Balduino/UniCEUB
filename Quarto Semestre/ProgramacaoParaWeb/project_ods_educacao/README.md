# Projeto: ODS — Educação de Qualidade (IDD 2023)

Este repositório contém um app Streamlit para explorar o dataset **IDD 2023**. O foco é analisar a **qualidade da docência** (IDD) por curso, IES e UF.

## Estrutura (atualizada)
```
project_ods_educacao/  (ou raiz do projeto)
├─ data/
│  ├─ geojson/
│  │  └─ br_states.json       # GeoJSON de estados (necessário para o choropleth)
│  └─ processed/
│     └─ idd_processed.csv
├─ src/
│  └─ data_prep.py            # funções de limpeza e processamento
├─ IDD_2023.xlsx              # dataset (fornecido)
├─ streamlit_app.py           # app principal (atualize se necessário)
├─ requirements.txt
└─ README.md  (este arquivo)
```

## Rodando localmente
1. Crie um ambiente virtual e ative.
2. Instale dependências:
```bash
pip install -r requirements.txt
```
3. Garanta que o arquivo `IDD_2023.xlsx` esteja no mesmo diretorio do app `streamlit_app.py` (ou ajuste a variável `DATA_RAW` no código).
4. Coloque o GeoJSON de estados em `data/geojson/br_states.json` (recomendado) para ativar o mapa choropleth por UF. Exemplo de download (terminal):
```bash
mkdir -p data/geojson
curl -L -o data/geojson/br_states.json \
  https://raw.githubusercontent.com/giuliano-macedo/geodata-br-states/main/geojson/br_states.json
```
5. Rode:
```bash
streamlit run streamlit_app.py
```

## Funcionalidades implementadas
- Filtros por área, UF e modalidade (o filtro de Ano pode ter sido removido tendo em vista que os dados são de 2023).
- KPIs: média/mediana do IDD, número de cursos, total de concluintes.
- Histogramas, barras por UF, scatter de participantes x IDD.
- Mapa choropleth por UF — requer `data/geojson/br_states.json`.
- Tabela filtrada com opção de download CSV.

## Considerações sobre tratamento de dados
- Script `src/data_prep.py` realiza limpeza básica: normalização de nomes de colunas, conversão de tipos, tratamento de nulos e exportação para CSV/Parquet para leitura rápida.

## Mapas (GeoJSON)
- Para ativar o choropleth por UF, coloque o GeoJSON de estados em `data/geojson/br_states.json` (recomendo o arquivo do repositório giuliano-macedo/geodata-br-states).
- Nota: arquivos municipais permitem detalhe por município, mas são grandes — simplifique (mapshaper) antes de usar no app para evitar lentidão.
