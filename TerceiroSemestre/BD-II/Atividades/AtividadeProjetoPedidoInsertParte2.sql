-- Inserir dados na tabela ITEM_PRODUTO em conformidade com os enunciados a seguir:

/*
1. Produto 207 para todos os pedidos pares e ano menor 2018, com a quantidade 100 e
pre�o unit�rio R$ 10.00
*/

INSERT INTO ITEM_PRODUTO
SELECT 207,NUMERO, 100, 10, NULL
FROM PEDIDO
WHERE MOD (NUMERO, 2) = 0 AND TO_CHAR(DATA,'YYYY') < 2018;

SELECT * 
FROM ITEM_PRODUTO;

/*
2. Produto 206 para todos os pedidos �mpares e ano igual 2018, com a quantidade 50 e
pre�o unit�rio R$ 12.00
*/

INSERT INTO ITEM_PRODUTO
SELECT 206,NUMERO, 50, 12, NULL
FROM PEDIDO
WHERE MOD (NUMERO, 2) != 0 AND TO_CHAR(DATA,'YYYY') = 2018;

SELECT * 
FROM ITEM_PRODUTO;

/*
3. Produto 207 para todos os pedidos pares e ano igual 2018, com a quantidade 150 e
pre�o unit�rio R$ 14.00
*/

INSERT INTO ITEM_PRODUTO
SELECT 207,NUMERO, 150, 14, NULL
FROM PEDIDO
WHERE MOD (NUMERO, 2) = 0 AND TO_CHAR(DATA,'YYYY') = 2018;

SELECT * 
FROM ITEM_PRODUTO;

/*
4. Produto 206 para todos os pedidos �mpares e ano menor 2018, com a quantidade 200 e
pre�o unit�rio R$ 8.00
*/

INSERT INTO ITEM_PRODUTO
SELECT 206,NUMERO, 200, 8, NULL
FROM PEDIDO
WHERE MOD (NUMERO, 2) != 0 AND TO_CHAR(DATA,'YYYY') < 2018;

SELECT * 
FROM ITEM_PRODUTO;

/*
5. Produto 208 para todos sem endere�o de entrega e ano igual 2017, com a quantidade 80 e
pre�o unit�rio R$ 18.00
*/

INSERT INTO ITEM_PRODUTO
SELECT 208,NUMERO, 80, 18, NULL
FROM PEDIDO
WHERE RUA IS NULL AND TO_CHAR(DATA,'YYYY') = 2017;

SELECT * 
FROM ITEM_PRODUTO;

/*
6. Produto 208 para todos sem endere�o de entrega e ano igual 2018, com a quantidade 70 e
pre�o unit�rio R$ 20.00
*/

INSERT INTO ITEM_PRODUTO
SELECT 208,NUMERO, 70, 20, NULL
FROM PEDIDO
WHERE RUA IS NULL AND TO_CHAR(DATA,'YYYY') = 2018;

SELECT * 
FROM ITEM_PRODUTO;

/*
7. Produto 202 para todos pedidos com endere�o de entrega e dia �mpar de entrega, com a
quantidade 60 e pre�o unit�rio R$ 15.00
*/

INSERT INTO ITEM_PRODUTO
SELECT 202,NUMERO, 60, 15, NULL
FROM PEDIDO
WHERE RUA IS NOT NULL AND MOD(TO_NUMBER(TO_CHAR(DATA,'DD')),2) != 0;

SELECT * 
FROM ITEM_PRODUTO;

/*
8. Produto 205 para todos pedidos com endere�o de entrega e dia par da data do pedido, com a
quantidade 90 e pre�o unit�rio R$ 11.50
*/

INSERT INTO ITEM_PRODUTO
SELECT 205,NUMERO, 90, 11.5, NULL
FROM PEDIDO
WHERE RUA IS NOT NULL AND MOD(TO_NUMBER(TO_CHAR(DATA,'DD')),2) = 0;

SELECT * 
FROM ITEM_PRODUTO;

/*
9. Produto 203 para todos pedidos com endere�o de entrega e dia �mpar da data de pedido, com a
quantidade 550 e pre�o unit�rio R$ 21.35
*/

INSERT INTO ITEM_PRODUTO
SELECT 203,NUMERO, 550, 21.35, NULL
FROM PEDIDO
WHERE RUA IS NOT NULL AND MOD(TO_NUMBER(TO_CHAR(DATA,'DD')),2) != 0;

SELECT * 
FROM ITEM_PRODUTO;

/*
10. Produto 204 para todos pedidos sem endere�o de entrega e dia par da data do pedido, com a
quantidade 150 e pre�o unit�rio R$ 25.85
*/

INSERT INTO ITEM_PRODUTO
SELECT 204,NUMERO, 150, 25.85, NULL
FROM PEDIDO
WHERE RUA IS NULL AND MOD(TO_NUMBER(TO_CHAR(DATA,'DD')),2) = 0;

SELECT * 
FROM ITEM_PRODUTO;
