-- Selecionar dados em tabelas do projeto PEDIDO, em conformidade com os enunciados a seguir:

-- a. Obter o produto(CODIGO e DESCRICAO) mais pedidos nos �ltimos 2 anos
-- com pedidos realizados. Ordenado crescente pela descri��o.

SELECT CODIGO, DESCRICAO
FROM (
  SELECT
    P.CODIGO,
    P.DESCRICAO,
    COUNT(DISTINCT IP.NUMERO_PED) AS QTD_PEDIDOS
  FROM PRODUTO P
  JOIN ITEM_PRODUTO IP
    ON P.CODIGO = IP.CODIGO_PRO
  JOIN PEDIDO PED
    ON IP.NUMERO_PED = PED.NUMERO
  WHERE
    PED.DATA >= ADD_MONTHS((SELECT MAX(DATA) FROM PEDIDO),-24)
  GROUP BY
    P.CODIGO,
    P.DESCRICAO
  ORDER BY
    QTD_PEDIDOS DESC
)
WHERE ROWNUM = 1
ORDER BY DESCRICAO ASC;

-- b. Listar a maior diferen�a entre os pre�os unit�rios dos produtos
-- pedidos.

SELECT
  MAX(IP.PRECO_UNITARIO) - MIN(IP.PRECO_UNITARIO)
FROM
  ITEM_PRODUTO IP;

-- c. Listar os produtos ainda n�o pedidos. Mostrar: Produto (CODIGO e
-- DESCRICAO), ordenados pela descri��o de produtos decrescente.

SELECT
  P.CODIGO,
  P.DESCRICAO
FROM
  PRODUTO P
LEFT JOIN
  ITEM_PRODUTO IP
    ON P.CODIGO = IP.CODIGO_PRO
WHERE
  IP.CODIGO_PRO IS NULL
ORDER BY
  P.DESCRICAO DESC;
