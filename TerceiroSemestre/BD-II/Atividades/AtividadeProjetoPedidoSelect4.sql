--Selecionar dados em tabelas do projeto PEDIDO, em conformidade com os enunciados a seguir:

-- a. Inserir uma prateleira de c�digo 390, descri��o 'Prateleira de
-- teste' e n�mero de se��es 2.
-- RESOLU��O:

INSERT INTO PRATELEIRA (
CODIGO, DESCRICAO, NUMERO_SECOES
)VALUES(
390, 'Prateleira de teste', 2);

-- b. Listar as prateleiras e os respectivos produtos que podem
-- armazenar. Mostrando a frase 'sem produto' quando n�o se relaciona
-- com nenhum. Mostrar: Prateleira (CODIGO, DESCRICAO), descri��o
-- (PRODUTO) e quantidade distinta de produtos, ordenados pela quantidade
-- de produtos decrescente.
-- RESOLU��O:

SELECT A.CODIGO, A.DESCRICAO, NVL(B.DESCRICAO, 'Sem Produto') PRODUTO,(
SELECT COUNT(DISTINCT D.CODIGO_PRO)
FROM CAPACIDADE_ESTOQUE C
WHERE C.CODIGO_PRA = A.CODIGO
) QUANTIDADE_PRODUTO
FROM PRATELEIRA A LEFT JOIN
CAPACIDADE_ESTOQUE D ON
D.CODIGO_PRA = A.CODIGO
LEFT JOIN PRODUTO B ON
B.CODIGO = D.CODIGO_PRO
ORDER BY QUANTIDADE_PRODUTO DESC;

-- c. Selecionar todos os clientes da view VIEW_CLIENTE que s�o PF.
-- Mostrar: CODIGO, NOME e CNPF, ordenado decrescente pelo nome do
-- cliente.
-- RESOLU��O:

SELECT CODIGO, NOME, CNPF
FROM VIEW_CLIENTE
WHERE CNPF IS NOT NULL
ORDER BY NOME DESC;

-- d. Listar os pedidos e seus respectivos produtos. Mostrar: numero do
-- pedido (PEDIDO), DATA do pedido, descri��o do produto (PRODUTO) e
-- QUANTIDADE de produtos no pedido. Ordenado pela DATA do pedido
-- crescente e, dentro das datas, pelo produto decrescente.
-- RESOLU��O:

SELECT P.NUMERO PEDIDO, P.DATA DATA, PR.DESCRICAO PRODUTO, IP.QUANTIDADE QUANTIDADE
FROM PEDIDO P JOIN ITEM_PRODUTO IP
ON P.NUMERO = IP.NUMERO_PED
JOIN PRODUTO PR
ON IP.CODIGO_PRO = PR.CODIGO
ORDER BY P.DATA ASC, PR.DESCRICAO DESC;

