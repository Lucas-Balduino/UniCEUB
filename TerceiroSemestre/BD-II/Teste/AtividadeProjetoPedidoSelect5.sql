--Selecionar dados em tabelas do projeto PEDIDO, em conformidade com os enunciados seguir:

-- a. Criar a view que mostra estoque constante no BD Pedidos.
-- (VIEW_ESTOQUE) contendo os dados indicados no modelo apresentado.

CREATE VIEW VIEW_ESTOQUE AS
SELECT
    P.DESCRICAO PRODUTO,
    NVL(SUM(E.QUANTIDADE), 0) QUANTIDADE_ADQUIRIDA,
    NVL(SUM(IP.QUANTIDADE), 0) QUANTIDADE_SAIDA,
    NVL(SUM(E.QUANTIDADE), 0) - NVL(SUM(IP.QUANTIDADE), 0) DISPONIVEL,
    P.UNID_MEDIDA UNID_MEDIDA
FROM
    PRODUTO P
    LEFT JOIN ESTOQUE E
    ON P.CODIGO = E.CODIGO_PRO
    LEFT JOIN ITEM_PRODUTO IP
    ON P.CODIGO = IP.CODIGO_PRO
GROUP BY
    P.DESCRICAO,
    P.UNID_MEDIDA;

SELECT *
FROM VIEW_ESTOQUE;