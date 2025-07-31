--Triggers
/*
    Uma trigger é um bloco de código PL/SQL que é executado
    automaticamente em resposta a um evento em uma tabela (como
    INSERT, UPDATE, DELETE).
    
    Características:
    ? Associada a eventos DML.
    ? Pode ser usada para auditoria, validação, ou sincronização.
    ? Executa automaticamente, sem chamada explícita.
*/

--Exemplo:
CREATE OR REPLACE TRIGGER trg_auditoria_aluno
AFTER INSERT OR UPDATE OR DELETE ON alunos
FOR EACH ROW
BEGIN
  INSERT INTO log_aluno (acao, data_alteracao)
  VALUES (
    CASE
      WHEN INSERTING THEN 'INSERT'
      WHEN UPDATING THEN 'UPDATE'
      WHEN DELETING THEN 'DELETE'
    END,
    SYSDATE
  );
END;
--Esse gatilho registra cada modificação feita na tabela alunos na tabela de log log_aluno.