--Selecionar dados em tabela simples do projeto PEDIDO, em conformidade com os enunciados a seguir:

/*
a. Listar os vendedores . Mostrar: Vendedor (MATRICULA e NOME).
Ordenados pelo nome decrescente.
*/

SELECT MATRICULA,NOME 
FROM VENDEDOR
ORDER BY NOME DESC;

/*
b. Listar distintamente os clientes PJ. Mostrar: Nome do cliente
(CLIENTE), CNPJ e CIDADE onde reside. Ordenados pelo nome do cliente
ascendente e, dentro deste, pela cidade descendente.
*/

SELECT A.NOME CLIENTE, B.CNPJ, A.CIDADE
FROM CLIENTE A INNER JOIN
PJ B ON A.CODIGO = B.CODIGO_CLI
ORDER BY A.NOME ASC,
A.CIDADE DESC;

/*
c. Listar os vendedores e seus pedidos já realizados com total de
fatura entre R$ 1000,00 e R$ 5000,00, inclusive.. Mostrar: Nome do
vendedor (VENDEDOR), número do pedido (PEDIDO),data do pedido (DATA)
com a formatação 'dd/mm/yyyy'. Ordenados pelo nome do vendedor
descendente e, dentro deste, pela data ascendente.
*/

SELECT A.NOME VENDEDOR, B.NUMERO PEDIDO, TO_CHAR(B.DATA,'DD/MM/YYYY') DATA
FROM VENDEDOR A INNER JOIN
PEDIDO B ON A.MATRICULA = B.MATRICULA_VEN
WHERE B.TOTAL_FATURA BETWEEN 1000 AND 5000
ORDER BY A.NOME DESC,
B.DATA ASC;

SELECT TOTAL_FATURA
FROM PEDIDO;