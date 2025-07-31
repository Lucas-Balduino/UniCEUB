--Triggers
/*
    Uma trigger � um bloco de c�digo PL/SQL que � executado
    automaticamente em resposta a um evento em uma tabela (como
    INSERT, UPDATE, DELETE).
    
    Caracter�sticas:
    ? Associada a eventos DML.
    ? Pode ser usada para auditoria, valida��o, ou sincroniza��o.
    ? Executa automaticamente, sem chamada expl�cita.
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
--Esse gatilho registra cada modifica��o feita na tabela alunos na tabela de log log_aluno.