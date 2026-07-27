--Deletar (excluir) dados em tabelas do projeto pedido, em conformidade com os enunciados a seguir:

SAVEPOINT ATIVIDADE_DELETE;

/*
a. Excluir os registros de PEDIDO em que o número seja ímpar, a
matrícula do vendedor 102 e o endereço de entrega não seja nulo.
Observação: Realizar a exclusão e verificar que os registros foram
excluídos apenas na transação.
*/

DELETE FROM ITEM_PRODUTO
WHERE NUMERO_PED IN (
SELECT NUMERO_PED FROM
ITEM_PRODUTO A INNER JOIN 
PEDIDO B ON A.NUMERO_PED = B.NUMERO 
WHERE MOD(A.NUMERO_PED,2) = 1
AND B.MATRICULA_VEN = 102
AND B.RUA IS NOT NULL);

DELETE FROM PEDIDO
WHERE MOD(NUMERO,2) = 1
AND MATRICULA_VEN = 102
AND RUA IS NOT NULL;

SELECT *
FROM PEDIDO;
/*
b. Excluir os itens de produtos do menor número de pedido na última data
de inclusão de pedido (a data mais recente).
Observação: Realizar a exclusão e verificar que os registros foram
excluídos apenas na transação.
*/

DELETE FROM ITEM_PRODUTO
WHERE NUMERO_PED IN (
SELECT MIN(NUMERO_PED) FROM
ITEM_PRODUTO A INNER JOIN
PEDIDO B ON A.NUMERO_PED = B.NUMERO
WHERE DATA = (
SELECT MAX (DATA) FROM PEDIDO));

/*
c. Desfazer as exclusões dos itens a. e b. da questão 4) acima.
Observação: Verificar que os registros estão nas respectivas tabelas.
*/


ROLLBACK (ATIVIDADE_DELETE);
