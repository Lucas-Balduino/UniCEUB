--Utilizando as tabelas do projeto pedido, realizar o que se pede:

-- a. Implementar uma solução para não permitir que sejam incluídos mais
-- produtos em item_produtos de pedidos do que a disponibilidade
-- existente no Estoque.
-- Fazer tratamento com mensagem de informação para o usuário indicando
-- o motivo para a não inclusão de produtos em itens dos pedidos.

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

  -- 2) Soma todas as saídas já lançadas em ITEM_PRODUTO (exceto a própria linha em edição)
  SELECT NVL(SUM(QUANTIDADE),0)
    INTO v_saida_total
    FROM ITEM_PRODUTO
   WHERE CODIGO_PRO = :NEW.CODIGO_PRO
     AND (:NEW.NUMERO_PED IS NULL OR NUMERO_PED  <> :NEW.NUMERO_PED);

  -- 3) Calcula o disponível
  v_disponivel := v_estoque_total - v_saida_total;

  -- 4) Se tentar pedir mais do que está disponível, aborta com mensagem
  IF :NEW.QUANTIDADE > v_disponivel THEN
    RAISE_APPLICATION_ERROR(
      -20020,
      'Não é possível incluir '||:NEW.QUANTIDADE||
      ' unidades. Estoque disponível: '||v_disponivel
    );
  END IF;
END;
/

-- b. Fazer uma query para verificação da existência do produto no estoque,
--passando como parâmetro o código do produto a ser verificado.

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
