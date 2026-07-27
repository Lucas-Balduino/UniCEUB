-- Alterar dados na tabela ITEM_PRODUTO em conformidade com os enunciados a seguir:

/*
a. Para os itens dos pedidos de NUMERO menor que 20 e maior que 50, com
e produtos com código de 203 a 205, inclusive: Multiplicar a
QUANTIDADE por 2
*/

UPDATE ITEM_PRODUTO 
SET QUANTIDADE = QUANTIDADE * 2
WHERE (NUMERO_PED < 20 OR NUMERO_PED > 50)
AND (CODIGO_PRO BETWEEN 203 AND 205);

SELECT * 
FROM ITEM_PRODUTO;

/*
b. Para o cliente de CODIGO ímpar com vendedor de MATRICULA par: somar
15 na QUANTIDADE.
*/

--TENTATIVACOM INNER JOIN
UPDATE ITEM_PRODUTO 
SET QUANTIDADE = QUANTIDADE + 15
WHERE EXISTS(
SELECT CODIGO_CLI
FROM ITEM_PRODUTO A INNER JOIN PEDIDO B
ON A.NUMERO_PED = B.NUMERO 
WHERE MOD(B.CODIGO_CLI,2) != 0
AND MOD(B.MATRICULA_VEN,2) = 0);


UPDATE ITEM_PRODUTO 
SET QUANTIDADE = QUANTIDADE + 15
WHERE NUMERO_PED IN 
(SELECT NUMERO
FROM PEDIDO 
WHERE MOD (CODIGO_CLI,2) = 1
AND MOD(MATRICULA_VEN,2) = 0);

/*
c. Para pedidos com NUMERO múltiplo de 3: Retirar R$ 0.50 no valor de
cada preço unitário.
*/

UPDATE ITEM_PRODUTO 
SET PRECO_UNITARIO = PRECO_UNITARIO - 0.5
WHERE MOD(NUMERO_PED,3) = 0;

/*
d. Ajustar o valor total de cada item de produto no pedido (VALOR_ITEM),
em conformidade com a quantidade e preço unitário.
*/

UPDATE ITEM_PRODUTO 
SET VALOR_ITEM = PRECO_UNITARIO * QUANTIDADE;

/*
e. Ajustar o total da fatura de todos os pedidos, em conformidade com os
valores dos itens incluídos em cada pedido.
*/

UPDATE PEDIDO
SET TOTAL_FATURA = (SELECT SUM(VALOR_ITEM) FROM ITEM_PRODUTO WHERE NUMERO_PED = NUMERO);