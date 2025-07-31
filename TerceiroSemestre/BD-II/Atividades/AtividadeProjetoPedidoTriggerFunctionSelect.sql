--Utilizando as tabelas do projeto pedido, realizar o que se pede:

-- a. Implementar uma solu��o para n�o permitir que sejam inclu�dos mais
-- produtos em item_produtos de pedidos do que a disponibilidade
-- existente no Estoque.
-- Fazer tratamento com mensagem de informa��o para o usu�rio indicando
-- o motivo para a n�o inclus�o de produtos em itens dos pedidos.

CREATE OR REPLACE TRIGGER TRG_ITEM_PRODUTO_ESTOQUE
BEFORE INSERT OR UPDATE
  ON ITEM_PRODUTO
FOR EACH ROW
DECLARE
  v_estoque_total   NUMBER;
  v_saida_total     NUMBER;
  v_disponivel      NUMBER;
BEGIN
  -- 1) Soma todas as entradas de estoque para este produto
  SELECT NVL(SUM(QUANTIDADE),0)
    INTO v_estoque_total
    FROM ESTOQUE
   WHERE CODIGO_PRO = :NEW.CODIGO_PRO;

  -- 2) Soma todas as sa�das j� lan�adas em ITEM_PRODUTO (exceto a pr�pria linha em edi��o)
  SELECT NVL(SUM(QUANTIDADE),0)
    INTO v_saida_total
    FROM ITEM_PRODUTO
   WHERE CODIGO_PRO = :NEW.CODIGO_PRO
     AND (:NEW.NUMERO_PED IS NULL OR NUMERO_PED  <> :NEW.NUMERO_PED);

  -- 3) Calcula o dispon�vel
  v_disponivel := v_estoque_total - v_saida_total;

  -- 4) Se tentar pedir mais do que est� dispon�vel, aborta com mensagem
  IF :NEW.QUANTIDADE > v_disponivel THEN
    RAISE_APPLICATION_ERROR(
      -20020,
      'N�o � poss�vel incluir '||:NEW.QUANTIDADE||
      ' unidades. Estoque dispon�vel: '||v_disponivel
    );
  END IF;
END;
/

-- b. Fazer uma query para verifica��o da exist�ncia do produto no estoque,
--passando como par�metro o c�digo do produto a ser verificado.

SELECT
  :p_codigo_pro AS CODIGO_PRODUTO,
  NVL(SUM(E.QUANTIDADE),0)
    - NVL((SELECT SUM(IP.QUANTIDADE)
             FROM ITEM_PRODUTO IP
            WHERE IP.CODIGO_PRO = :p_codigo_pro),0)
    AS ESTOQUE_DISPONIVEL
FROM
  ESTOQUE E
WHERE
  E.CODIGO_PRO = :p_codigo_pro
GROUP BY
  E.CODIGO_PRO;
