-- Function 
/*
    Uma function (fun��o armazenada) � um bloco PL/SQL que retorna
    um valor �nico e pode ser usada em express�es SQL ou chamadas
    PL/SQL.
    
    Caracter�sticas:
    ? Deve retornar um valor (RETURN)
    ? Pode receber par�metros (IN)
    ? Usada em consultas, valida��es, c�lculos, etc.
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