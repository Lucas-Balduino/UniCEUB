-- Function 
/*
    Uma function (função armazenada) é um bloco PL/SQL que retorna
    um valor único e pode ser usada em expressões SQL ou chamadas
    PL/SQL.
    
    Características:
    ? Deve retornar um valor (RETURN)
    ? Pode receber parâmetros (IN)
    ? Usada em consultas, validações, cálculos, etc.
*/

-- Exemplo:
CREATE OR REPLACE FUNCTION calcular_idade(p_data_nascimento DATE)
RETURN NUMBER IS
    v_idade NUMBER;
BEGIN
    v_idade := TRUNC(MONTHS_BETWEEN(SYSDATE, p_data_nascimento) / 12);
    RETURN v_idade;
END;

-- Pode ser usada assim:
SELECT nome, calcular_idade(data_nasc) AS idade
FROM alunos;