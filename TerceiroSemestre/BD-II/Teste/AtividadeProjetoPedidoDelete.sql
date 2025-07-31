--Deletar (excluir) dados em tabelas do projeto pedido, em conformidade com os enunciados a seguir:

SAVEPOINT ATIVIDADE_DELETE;

/*
a. Excluir os registros de PEDIDO em que o n�mero seja �mpar, a
matr�cula do vendedor 102 e o endere�o de entrega n�o seja nulo.
Observa��o: Realizar a exclus�o e verificar que os registros foram
exclu�dos apenas na transa��o.
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
b. Excluir os itens de produtos do menor n�mero de pedido na �ltima data
de inclus�o de pedido (a data mais recente).
Observa��o: Realizar a exclus�o e verificar que os registros foram
exclu�dos apenas na transa��o.
*/

DELETE FROM ITEM_PRODUTO
WHERE NUMERO_PED IN (
SELECT MIN(NUMERO_PED) FROM
ITEM_PRODUTO A INNER JOIN
PEDIDO B ON A.NUMERO_PED = B.NUMERO
WHERE DATA = (
SELECT MAX (DATA) FROM PEDIDO));

/*
c. Desfazer as exclus�es dos itens a. e b. da quest�o 4) acima.
Observa��o: Verificar que os registros est�o nas respectivas tabelas.
*/


ROLLBACK (ATIVIDADE_DELETE);
