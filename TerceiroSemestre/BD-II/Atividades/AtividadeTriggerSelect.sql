--Implementar trigger e queries com a linguagem SQL aplicadas no SGBDR Oracle 10g,apoiadas no SqlDeveloper.

-- a. Fazer uma trigger para manter o log de altera��es no banco de dados.
-- com o nome TRG_LOG_ALTERACOES_BD. Ao realizar uma altera��o em uma
-- tabela qualquer a trigger ir� fazer uma inclus�o na tabela
-- LOG_ALTERACOES, onde a a��o ser� em conformidade com o tipo de
-- altera��o (INSER��O, ALTERA��O e/ou DELE��O), incluindo o nome da
-- tabela e a data altera��o.

DROP TRIGGER TRG_LOG_ALTERACOES_ALUNOS;
/

CREATE OR REPLACE TRIGGER TRG_LOG_ALTERACOES_ALUNOS
AFTER INSERT OR UPDATE OR DELETE
  ON ALUNOS
DECLARE
  v_acao VARCHAR2(20);
BEGIN
  v_acao := CASE
              WHEN INSERTING THEN 'INSER��O'
              WHEN UPDATING  THEN 'ALTERA��O'
              WHEN DELETING  THEN 'DELE��O'
            END;

  INSERT INTO LOG_ALTERACOES (
    id_log,
    acao,
    tabela,
    data_evento
  ) VALUES (
    SEQ_ID_LOG_ALTERACOES.NEXTVAL,
    v_acao,
    'ALUNOS',
    SYSDATE
  );
END;
/

-- b. Fazer queries, pelo menos uma para cada a��o (INSER��O, ALTERA��O
-- e/ou DELE��O) na tabela ALUNOS.

-- 1) INSER��O (INSERT) em ALUNOS
INSERT INTO ALUNOS (NOME, DATA_NASCIMENTO, EMAIL)
VALUES ('Maria Silva', TO_DATE('15/08/1995','DD/MM/YYYY'), 'maria.silva@example.com');

-- 2) ALTERA��O (UPDATE) em ALUNOS
UPDATE ALUNOS
   SET EMAIL = 'maria.s.silva@example.com'
 WHERE CODIGO = 1;

-- 3) EXCLUS�O (DELETE) em ALUNOS
DELETE FROM ALUNOS
 WHERE CODIGO = 1;

-- C. Fazer uma query para verificar os logs registrados nas a��es do item b.

SELECT
  ID_LOG,
  ACAO,
  TABELA,
  DATA_EVENTO
FROM
  LOG_ALTERACOES
WHERE
  TABELA = 'ALUNOS'
ORDER BY
  DATA_EVENTO ASC;
