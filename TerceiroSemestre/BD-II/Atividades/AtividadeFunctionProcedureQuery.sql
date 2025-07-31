--Implementar funções, procedimentos e queries com a linguagem SQL aplicadas no SGBDR Oracle 10g, apoiadas no SqlDeveloper.

-- a. Fazer um procedimento armazenado com o nome PROC_ATUALZ_EMAIL_ALUNO
-- em conformidade com:
-- 1) Receba o email para a atualização garantindo (crítica) que possui:
-- um-e-somente-um @
-- pelo menos um ponto depois do @
-- pelo menos um carácter antes e um depois do @
-- Com tratamento de exceção
-- 2) O procedimento será acionado por uma função com o nome
-- FUNC_ATUALZ_EMAIL_ALUNO que terá como retorno uma mensagem
-- ‘Atualizado com sucesso’ OU ‘Não atualizado pelo motivo ...'
-- 3) Crie pelo menos um exemplo de uso da função com o procedimento.

-- 1) Procedimento que valida e atualiza o email do aluno
CREATE OR REPLACE PROCEDURE PROC_ATUALZ_EMAIL_ALUNO(
  p_codigo IN ALUNOS.codigo%TYPE,
  p_email  IN VARCHAR2
) IS
  v_at_count   PLS_INTEGER;
  v_pos_arroba PLS_INTEGER;
  v_dom        VARCHAR2(320);
BEGIN
  -- Conta quantos '@' existem
  v_at_count := LENGTH(p_email) - LENGTH(REPLACE(p_email, '@', ''));
  IF v_at_count <> 1 THEN
    RAISE_APPLICATION_ERROR(-20010, 'Email deve conter um único @');
  END IF;

  -- Posição do '@'
  v_pos_arroba := INSTR(p_email, '@');
  IF v_pos_arroba < 2 OR v_pos_arroba > LENGTH(p_email)-1 THEN
    RAISE_APPLICATION_ERROR(-20011, 'Deve haver ao menos um caractere antes e depois do @');
  END IF;

  -- Domínio após o '@'
  v_dom := SUBSTR(p_email, v_pos_arroba+1);
  IF INSTR(v_dom, '.') = 0 THEN
    RAISE_APPLICATION_ERROR(-20012, 'Deve haver pelo menos um ponto após o @');
  END IF;

  -- Se chegou aqui, o email está válido — atualiza
  UPDATE ALUNOS
     SET EMAIL = p_email
   WHERE CODIGO = p_codigo;

  IF SQL%ROWCOUNT = 0 THEN
    RAISE_APPLICATION_ERROR(-20013, 'Aluno não encontrado (código '||p_codigo||')');
  END IF;
END;
/

-- 2) Função que aciona o procedimento e retorna mensagem
CREATE OR REPLACE FUNCTION FUNC_ATUALZ_EMAIL_ALUNO(
  p_codigo IN ALUNOS.codigo%TYPE,
  p_email  IN VARCHAR2
) RETURN VARCHAR2 IS
BEGIN
  PROC_ATUALZ_EMAIL_ALUNO(p_codigo, p_email);
  RETURN 'Atualizado com sucesso';
EXCEPTION
  WHEN OTHERS THEN
    RETURN 'Não atualizado pelo motivo: ' || SUBSTR(SQLERRM, 1, 200);
END;
/

-- 3) Exemplos de uso

-- (a) Sucesso
SELECT FUNC_ATUALZ_EMAIL_ALUNO(1, 'joao.silva@example.com') AS RESULTADO
FROM DUAL;
-- RESULTADO => Atualizado com sucesso

-- (b) Falha de validação: sem ponto após '@'
SELECT FUNC_ATUALZ_EMAIL_ALUNO(1, 'joao.silva@examplecom') AS RESULTADO
FROM DUAL;
-- RESULTADO => Não atualizado pelo motivo: ORA-20012: Deve haver pelo menos um ponto após o @

-- (c) Falha de negócio: aluno não existe
SELECT FUNC_ATUALZ_EMAIL_ALUNO(999, 'maria@example.com') AS RESULTADO
FROM DUAL;
-- RESULTADO => Não atualizado pelo motivo: ORA-20013: Aluno não encontrado (código 999)
