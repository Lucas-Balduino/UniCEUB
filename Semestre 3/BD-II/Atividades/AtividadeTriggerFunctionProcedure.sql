-- Programar executar o script DDL para as seguintes tabelas expressas no MER Físico.

-- Sequencias

-- Sequencia para a tabela ALUNOS
CREATE SEQUENCE SEQ_CODIGO_ALUNOS
  START WITH 1
  INCREMENT BY 1
  NOCACHE
  NOCYCLE;

-- Sequencia para a tabela LOG_ALTERACOES
CREATE SEQUENCE SEQ_ID_LOG_ALTERACOES
  START WITH 1
  INCREMENT BY 1
  NOCACHE
  NOCYCLE;


-- Tabelas

-- 1) Tabela ALUNOS
CREATE TABLE ALUNOS (
  codigo           NUMBER           NOT NULL,
  nome             VARCHAR2(100)    NOT NULL,
  data_nascimento  DATE             NOT NULL,
  email            VARCHAR2(100)    NOT NULL,
  CONSTRAINT ALUNO_PK PRIMARY KEY (codigo)
);

-- 2) Tabela LOG_ALTERACOES
DROP TABLE LOG_ALTERACOES;
CREATE TABLE LOG_ALTERACOES (
  id_log      NUMBER           NOT NULL,
  acao        VARCHAR2(20)     NOT NULL,
  tabela      VARCHAR2(30)     NOT NULL,
  data_evento DATE             NOT NULL,
  CONSTRAINT LOG_ALTERACOES_PK PRIMARY KEY (id_log)
);


-- Triggers (BEFORE INSERT)

-- 1) Trigger para ALUNOS: preenche CÓDIGO via SEQ_CODIGO_ALUNOS
CREATE OR REPLACE TRIGGER TRG_ALUNOS_BI
BEFORE INSERT
  ON ALUNOS
FOR EACH ROW
BEGIN
  IF :NEW.codigo IS NULL THEN
    SELECT SEQ_CODIGO_ALUNOS.NEXTVAL
      INTO :NEW.codigo
      FROM DUAL;
  END IF;
END;
  
-- 2) Trigger para LOG_ALTERACOES:
--    - Impede inserção manual de ID_LOG (gera erro se user tentar especificar)
--    - Preenche ID_LOG via SEQ_ID_LOG_ALTERACOES
CREATE OR REPLACE TRIGGER TRG_LOG_ALTR_BI
BEFORE INSERT
  ON LOG_ALTERACOES
FOR EACH ROW
BEGIN
  IF :NEW.id_log IS NOT NULL THEN
    RAISE_APPLICATION_ERROR(
      -20001,
      'Não é permitido inserir manualmente o ID'
    );
  END IF;

  SELECT SEQ_ID_LOG_ALTERACOES.NEXTVAL
    INTO :NEW.id_log
    FROM DUAL;
END;
