"""
data_prep.py
Funções para carregar e limpar o arquivo IDD_2023.xlsx.
Produz um arquivo processed/idd_processed.csv para uso pelo app.
"""

import pandas as pd
from pathlib import Path

def clean_column_names(df: pd.DataFrame) -> pd.DataFrame:
    df = df.copy()
    df.columns = [c.strip().replace(' ', '_').replace('.', '').replace('(', '').replace(')', '') for c in df.columns]
    return df

def load_raw(path: str) -> pd.DataFrame:
    path = Path(path)
    if not path.exists():
        raise FileNotFoundError(f"Arquivo não encontrado: {path}")
    df = pd.read_excel(path, sheet_name=0)
    df = clean_column_names(df)
    return df

def basic_cleaning(df: pd.DataFrame) -> pd.DataFrame:
    df = df.copy()
    # Trim strings
    for c in df.select_dtypes(include='object').columns:
        df[c] = df[c].astype(str).str.strip()
    # Convert common numeric columns
    num_cols = ['Código_da_Área','Código_da_IES','Código_do_Curso','Código_do_Município',
                'Nº_de_Concluintes_Inscritos','Nº_de_Concluintes_Participantes','Nº_de_Concluintes_Participantes_com_nota_no_Enem']
    for c in num_cols:
        if c in df.columns:
            df[c] = pd.to_numeric(df[c], errors='coerce')
    # Normalize UF column name if present
    if 'Sigla_da_UF' in df.columns:
        df['Sigla_da_UF'] = df['Sigla_da_UF'].str.upper().replace({'nan': None})
    # Convert year
    if 'Ano' in df.columns:
        try:
            df['Ano'] = pd.to_numeric(df['Ano'], errors='coerce').astype('Int64')
        except Exception:
            pass
    # Convert IDD continuous to numeric
    for c in ['IDD_Contínuo', 'Nota_Bruta_-_IDD']:
        if c in df.columns:
            df[c] = pd.to_numeric(df[c], errors='coerce')
    return df

def save_processed(df: pd.DataFrame, out_path: str) -> None:
    out_dir = Path(out_path).parent
    out_dir.mkdir(parents=True, exist_ok=True)
    df.to_csv(out_path, index=False, encoding='utf-8')

def prepare(path_raw: str, path_processed: str = "data/processed/idd_processed.csv") -> pd.DataFrame:
    df = load_raw(path_raw)
    df = basic_cleaning(df)
    save_processed(df, path_processed)
    return df

if __name__ == "__main__":
    import sys
    raw = sys.argv[1] if len(sys.argv) > 1 else "../data/raw/IDD_2023.xlsx"
    out = sys.argv[2] if len(sys.argv) > 2 else "../data/processed/idd_processed.csv"
    df = prepare(raw, out)
    print("Processed saved to", out)
