-- Procedure
/*
    Uma procedure é um bloco de código armazenado que executa uma
    ação, podendo ter vários parâmetros, mas não retorna um valor
    diretamente como uma função.
    
    Características:
    ? Ideal para operações complexas ou de manutenção
    ? Pode usar parâmetros IN, OUT ou IN OUT
*/

-- Exemplo:
CREATE OR REPLACE PROCEDURE atualizar_email_aluno(
  p_id_aluno IN NUMBER,
  p_novo_email IN VARCHAR2
) IS
BEGIN
  UPDATE alunos
  SET email = p_novo_email
  WHERE id = p_id_aluno;
  COMMIT;
END;

--Chamada:
BEGIN
  atualizar_email_aluno(1, 'novo@email.com');
END;