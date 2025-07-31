--Selecionar dados em tabelas do projeto PEDIDO, em conformidade com os enunciados a seguir:

/*
a. Selecionar as constraints criadas da tabela ITEM_PRODUTO. Mostrar:
constraint_name (CONSTRAINT), constraint_type (TIPO) e
search_condition (CONDICAO). Ordenado pelo nome da constraint.
*/

SELECT CONSTRAINT_NAME CONSTRAINT, CONSTRAINT_TYPE TIPO, SEARCH_CONDITION CONDICAO
FROM USER_CONSTRAINTS 
WHERE TABLE_NAME = 'ITEM_PRODUTO'
ORDER BY CONSTRAINT_NAME;

/*
b. Criar a view de clientes constante do BD Pedidos (VIEW_CLIENTE)
contendo os dados das tabelas CLIENTE, PF e PJ. Em conformidade com a
estrutura disponível no MER físico do projeto BD de Pedido.
*/

CREATE OR REPLACE VIEW VIEW_CLIENTE AS 
SELECT 
CASE 
WHEN B.CODIGO_CLI IS NOT NULL THEN 'PF'
WHEN C.CODIGO_CLI IS NOT NULL THEN 'PJ'
END AS TIPO
,A.CODIGO, A.NOME, B.CNPF, C.CNPJ
FROM (CLIENTE A LEFT JOIN PF B ON A.CODIGO = B.CODIGO_CLI)
LEFT JOIN PJ C ON A.CODIGO = C.CODIGO_CLI;

SELECT *
FROM VIEW_CLIENTE;
