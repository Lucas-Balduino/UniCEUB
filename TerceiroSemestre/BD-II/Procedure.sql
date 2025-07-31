-- Procedure
/*
    Uma procedure � um bloco de c�digo armazenado que executa uma
    a��o, podendo ter v�rios par�metros, mas n�o retorna um valor
    diretamente como uma fun��o.
    
    Caracter�sticas:
    ? Ideal para opera��es complexas ou de manuten��o
    ? Pode usar par�metros IN, OUT ou IN OUT
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