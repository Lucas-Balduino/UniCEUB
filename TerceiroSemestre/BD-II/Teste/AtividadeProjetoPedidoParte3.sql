----------------------------------------------------------------------------------
--Criar uma constraint que garanta que o valor do NUMERO da tabela PEDIDO esteja--
-------------------entre, inclusive, 1 e 99999.-----------------------------------
----------------------------------------------------------------------------------

ALTER TABLE PEDIDO
ADD CONSTRAINT CK_NUMERO_PEDIDO CHECK (NUMERO BETWEEN 1 AND 99999)-- NUMERO >= 1 AND NUMERO<= 99999
;

--------------------------------------------------------------------------------------
--Criar os indexes das tabelas PF e PJ. Estes indexes serão únicos e utilizados como--
-----------------------------listas invertidas.---------------------------------------
--------------------------------------------------------------------------------------

ALTER TABLE PF
ADD CONSTRAINT UK_PF UNIQUE (CNPF)
;

ALTER TABLE PJ
ADD CONSTRAINT UK_PJ UNIQUE (CNPJ)
;

CREATE UNIQUE INDEX IND_CNPF_PF ON PF (CNPF DESC);

CREATE UNIQUE INDEX IND_CNPJ_PJ ON PJ (CNPJ DESC);

-----------------------------------------------------------------
--Criar uma sequence de nome SEQ_ITEM_ID para o campo CODIGO de--
------------ITEM_PRODUTO, com incremento de 2.-------------------
-----------------------------------------------------------------

DROP SEQUENCE SEQ_ITEM_ID;

CREATE SEQUENCE SEQ_ITEM_ID INCREMENT BY 2 ;

SELECT * 
FROM USER_SEQUENCES
WHERE SEQUENCE_NAME = 'SEQ_ITEM_ID';

SELECT SEQ_ITEM_ID.NEXTVAL, ITEM_PRODUTO.CODIGO_PRO
FROM ITEM_PRODUTO