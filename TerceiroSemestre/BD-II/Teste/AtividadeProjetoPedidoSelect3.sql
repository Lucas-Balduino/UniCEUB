--Selecionar dados em tabela simples do projeto PEDIDO, em conformidade com os enunciados a seguir:

-- a. Query de consulta no dicion�rio de dados (cat�logo). Selecionar
-- todas as tabelas do seu usu�rio (projeto). Mostrar: nome da tabela
-- (TABELA) ordenado crescente.
-- RESOLU��O:

SELECT TABLE_NAME
FROM USER_TABLES
ORDER BY TABLE_NAME ASC;

-- b. Fazer uma query para recuperar todos os pedidos cujo total da fatura
-- seja maior do que R$ 2000,00. Mostrar: numero do pedido (PEDIDO),
-- DATA, total da fatura (TOTAL), ordenado decrescente pela data do
-- pedido.
-- RESOLU��O:

SELECT NUMERO PEDIDO, DATA, TOTAL_FATURA TOTAL
FROM PEDIDO
WHERE TOTAL_FATURA > 2000
ORDER BY DATA DESC;

-- c. Fazer uma query para recuperar todos os pedidos cujo total da fatura
-- seja maior do que R$ 2000,00. Mostrar: nome cliente (CLIENTE), numero
-- do pedido (PEDIDO),DATA, total da fatura (TOTAL), ordenado crescente
-- pelo nome do cliente.
-- RESOLU��O:

SELECT A.NOME CLIENTE, B.NUMERO PEDIDO , DATA, TOTAL_FATURA TOTAL
FROM CLIENTE A INNER JOIN
PEDIDO B ON A.CODIGO = B.CODIGO_CLI
WHERE TOTAL_FATURA > 2000
ORDER BY A.NOME ASC;