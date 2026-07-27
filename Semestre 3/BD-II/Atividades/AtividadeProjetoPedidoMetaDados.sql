-- Utilizando o comando DML Select para pesquisas no dicionário ativo de dados.

/*
1) Selecionar os metadados das tabelas criadas pelo usuário logado.
*/

SELECT TABLE_NAME NOME_TABELA, TABLESPACE_NAME,NUM_ROWS,LAST_ANALYZED
FROM USER_TABLES;

/*
2) Selecionar os metadados das colunas das tabelas criadas pelo usuário logado.
*/

SELECT TABLE_NAME, COLUMN_NAME, DATA_TYPE, DATA_LENGTH, DATA_PRECISION, DATA_SCALE, NULLABLE, COLUMN_ID
FROM USER_TAB_COLUMNS;


/*
3) Selecionar os metadados das regras (constraints) implementadas nas tabelas criadas
pelo usuário logado.
*/

SELECT UC.CONSTRAINT_NAME, UC.CONSTRAINT_TYPE, UC.TABLE_NAME, UC.SEARCH_CONDITION, UC.CONSTRAINT_NAME
FROM USER_CONSTRAINTS UC;

/*
4) Selecionar os metadados das regras (constraints) implementadas nas colunas das
tabelas criadas pelo usuário logado.
*/

SELECT UCC.TABLE_NAME, UCC.COLUMN_NAME, UC.CONSTRAINT_NAME, UC.CONSTRAINT_TYPE, UC.SEARCH_CONDITION
FROM USER_CONS_COLUMNS UCC JOIN 
USER_CONSTRAINTS UC ON  UCC.CONSTRAINT_NAME = UC.CONSTRAINT_NAME
AND UCC.OWNER = UC.OWNER;