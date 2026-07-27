-- SQL Summary and Study Guide
-- File: sql_summary.sql
-- Organized overview from basic to advanced SQL concepts
-- Each section includes examples plus explanations of logic and functionality

-- ==================================================
-- 1. Data Definition Language (DDL)                
--    Used to define or modify the structure of database objects.
-- ==================================================

-- 1.1 CREATE TABLE: defines a new table and its constraints
-- Logic: specify column names, types, nullability, and primary key to enforce entity integrity.
CREATE TABLE ALUNOS (
    codigo           NUMBER           NOT NULL,      -- unique identifier for each aluno
    nome             VARCHAR2(100)    NOT NULL,      -- student name, cannot be null
    data_nascimento  DATE             NOT NULL,      -- birthdate, cannot be null
    email            VARCHAR2(100)    NOT NULL,      -- email, cannot be null
    CONSTRAINT ALUNO_PK PRIMARY KEY (codigo)          -- primary key constraint
);

-- 1.2 ALTER TABLE ADD CONSTRAINT: adds a foreign key
-- Logic: ensures referential integrity between ITEM_PRODUTO and PEDIDO tables.
ALTER TABLE ITEM_PRODUTO
    ADD CONSTRAINT FK_ITEM_PEDIDO
      FOREIGN KEY (NUMERO_PED)                  -- column in child table
      REFERENCES PEDIDO(NUMERO);                -- referenced parent table PK

-- 1.3 DROP/TRUNCATE: remove structures or data quickly
-- DROP TABLE: deletes the table definition and data
DROP TABLE TEMP_TABLE;
-- TRUNCATE TABLE: removes all rows but keeps table structure
TRUNCATE TABLE LOG_ALTERACOES;


-- ==================================================
-- 2. Data Manipulation Language (DML)             
--    Used to manipulate data within tables (CRUD).
-- ==================================================

-- 2.1 INSERT: add new records
-- Logic: specify target table and values corresponding to columns
INSERT INTO ALUNOS (nome, data_nascimento, email)
VALUES (
    'João',                       -- nome column
    TO_DATE('01/01/2000','DD/MM/YYYY'),  -- convert string to DATE
    'joao@example.com'            -- email column
);

-- 2.2 UPDATE: modify existing records
-- Logic: set new values where condition matches specific rows
UPDATE ALUNOS
   SET email = 'joao.s@example.com'   -- new email
 WHERE codigo = 1;                    -- only student with codigo = 1

-- 2.3 DELETE: remove records
-- Logic: delete rows meeting the WHERE condition
DELETE FROM ALUNOS
 WHERE codigo = 1;                    -- removes student with codigo = 1

-- 2.4 MERGE: combination of INSERT and UPDATE (UPSERT)
-- Logic: update if exists, otherwise insert new record
MERGE INTO PRODUTO P
USING (SELECT :cod AS codigo, :desc AS descricao FROM DUAL) src
  ON (P.codigo = src.codigo)          -- match target PK
WHEN MATCHED THEN
  UPDATE SET P.descricao = src.descricao  -- update existing
WHEN NOT MATCHED THEN
  INSERT (codigo, descricao)           -- insert when no match
  VALUES (src.codigo, src.descricao);


-- ==================================================
-- 3. Querying and Clauses                         
--    Retrieve and filter data using SELECT and predicates.
-- ==================================================

-- 3.1 Basic SELECT: retrieve specific columns
SELECT codigo, nome
  FROM ALUNOS;
-- Logic: SELECT column list FROM table; returns desired columns for all rows.

-- 3.2 WHERE filters: apply conditions to rows
SELECT *
  FROM PRODUTO
 WHERE preco > 100                -- only products with price greater than 100
   AND disponivel = 'S';           -- and availability flag 'S'

-- 3.3 ORDER BY: sort result set
SELECT codigo, nome
  FROM ALUNOS
 ORDER BY nome ASC;                -- ascending order by student name

-- 3.4 DISTINCT: remove duplicate values
SELECT DISTINCT unid_medida
  FROM PRODUTO;                     -- show each unit of measure only once

-- 3.5 ROWNUM / FETCH FIRST: limit rows returned
SELECT codigo, descricao
  FROM PRODUTO
 WHERE ROWNUM <= 10;               -- first 10 rows (Oracle specific)

-- 3.6 BETWEEN and IN: range and set comparisons
SELECT *
  FROM PEDIDO
 WHERE data BETWEEN SYSDATE-30 AND SYSDATE;  -- last 30 days of orders

SELECT *
  FROM CLIENTE
 WHERE tipo IN ('PF', 'PJ');       -- only personal or corporate clients


-- ==================================================
-- 4. Joins                                        
--    Combine rows from multiple tables based on related columns.
-- ==================================================

-- 4.1 INNER JOIN: return only matching rows
SELECT P.codigo, P.descricao, IP.quantidade
  FROM PRODUTO P
  INNER JOIN ITEM_PRODUTO IP
    ON P.codigo = IP.codigo_pro;     -- match on product code

-- 4.2 LEFT JOIN: return all left rows and matching right rows
SELECT C.codigo,
       NVL(F.numero, 'sem fone') AS fone  -- substitute 'sem fone' when NULL
  FROM CLIENTE C
  LEFT JOIN FONE F
    ON C.codigo = F.codigo_cli;     -- includes clients without phones

-- 4.3 RIGHT JOIN / FULL OUTER JOIN similarly for other use cases

-- 4.4 CROSS JOIN: Cartesian product (all combinations)
SELECT A.nome AS aluno, B.nome AS vendedor
  FROM ALUNOS A
 CROSS JOIN VENDEDOR B;

-- 4.5 Self-Join: table joined to itself
SELECT E1.nome AS gestor, E2.nome AS funcionario
  FROM EMPLEADOS E1
  JOIN EMPLEADOS E2
    ON E1.codigo = E2.id_gestor;     -- relate employee to manager


-- ==================================================
-- 5. Aggregation and Grouping                     
--    Perform calculations on sets of rows.
-- ==================================================

-- 5.1 GROUP BY and HAVING: group rows and filter groups
SELECT P.codigo,
       COUNT(IP.numero_ped) AS qtd_pedidos
  FROM PRODUTO P
  JOIN ITEM_PRODUTO IP
    ON P.codigo = IP.codigo_pro
 GROUP BY P.codigo             -- aggregate per product
HAVING COUNT(IP.numero_ped) > 5; -- only products with >5 orders

-- 5.2 Aggregate functions: compute min, max, avg, sum
SELECT MIN(preco_unitario) AS menor_preco,
       MAX(preco_unitario) AS maior_preco,
       AVG(preco_unitario) AS preco_medio
  FROM ITEM_PRODUTO;

-- 5.3 Analytic (window) functions: over-partitioned computations
SELECT codigo,
       descricao,
       preco,
       RANK() OVER (ORDER BY preco DESC) AS rk_preco  -- rank products by price
  FROM PRODUTO;


-- ==================================================
-- 6. Subqueries and CTEs                          
--    Use queries within queries to structure complex logic.
-- ==================================================

-- 6.1 Scalar subquery: returns single value to SELECT list
SELECT nome,
       (SELECT COUNT(*)
          FROM PEDIDO PED
         WHERE PED.codigo_cli = C.codigo) AS total_pedidos
  FROM CLIENTE C;
-- Logic: for each client, count how many orders exist.

-- 6.2 Inline view (derived table)
SELECT codigo, descricao
  FROM (
    SELECT P.codigo,
           P.descricao,
           RANK() OVER (ORDER BY COUNT(IP.numero_ped) DESC) AS rk
      FROM PRODUTO P
      JOIN ITEM_PRODUTO IP ON P.codigo = IP.codigo_pro
     GROUP BY P.codigo, P.descricao
  )
 WHERE rk = 1;                 -- only top-ranked product

-- 6.3 Common Table Expression (WITH): name a subquery
WITH vendas AS (
  SELECT codigo_pro,
         SUM(quantidade) AS tot_vendas
    FROM ITEM_PRODUTO
   GROUP BY codigo_pro
)
SELECT P.codigo, P.descricao, NVL(v.tot_vendas, 0) AS vendas
  FROM PRODUTO P
  LEFT JOIN vendas v
    ON P.codigo = v.codigo_pro;


-- ==================================================
-- 7. Views                                        
--    Virtual tables encapsulating query logic.
-- ==================================================

CREATE OR REPLACE VIEW VIEW_CLIENTE AS
SELECT
  C.codigo,
  C.nome,
  CASE WHEN PF.codigo_cli IS NOT NULL THEN 'PF'
       WHEN PJ.codigo_cli IS NOT NULL THEN 'PJ'
       ELSE 'DESCONHECIDO'
  END AS tipo,                         -- determine client subtype
  COALESCE(PF.cnpf, PJ.cnpj) AS documento -- pick CPF or CNPJ
FROM CLIENTE C
LEFT JOIN PF PF ON C.codigo = PF.codigo_cli
LEFT JOIN PJ PJ ON C.codigo = PJ.codigo_cli;


-- ==================================================
-- 8. Sequences and Triggers                       
--    Automate key generation and enforce business rules.
-- ==================================================

-- 8.1 Sequence: generates unique numbers
CREATE SEQUENCE SEQ_CODIGO_ALUNOS
  START WITH 1
  INCREMENT BY 1
  NOCACHE
  NOCYCLE;

-- 8.2 Trigger for primary key assignment
-- Logic: before insert, assign next sequence value if user omitted PK
CREATE OR REPLACE TRIGGER TRG_ALUNOS_BI
BEFORE INSERT ON ALUNOS
FOR EACH ROW
BEGIN
  IF :NEW.codigo IS NULL THEN
    :NEW.codigo := SEQ_CODIGO_ALUNOS.NEXTVAL;
  END IF;
END;
/

-- 8.3 Trigger for stock validation
-- Logic: prevent ordering more than available stock
CREATE OR REPLACE TRIGGER TRG_ITEM_PROD_ESTQ
BEFORE INSERT OR UPDATE ON ITEM_PRODUTO
FOR EACH ROW
DECLARE
  v_tot_entrada NUMBER;
  v_tot_saida   NUMBER;
BEGIN
  -- total entries from ESTOQUE
  SELECT NVL(SUM(quantidade),0)
    INTO v_tot_entrada
    FROM ESTOQUE
   WHERE codigo_pro = :NEW.codigo_pro;

  -- total already ordered in other ITEMS
  SELECT NVL(SUM(quantidade),0)
    INTO v_tot_saida
    FROM ITEM_PRODUTO
   WHERE codigo_pro = :NEW.codigo_pro
     AND (numero_ped <> :NEW.numero_ped OR :NEW.numero_ped IS NULL);

  IF :NEW.quantidade > (v_tot_entrada - v_tot_saida) THEN
    RAISE_APPLICATION_ERROR(
      -20020,
      'Quantidade '||:NEW.quantidade||
      ' excede estoque disponível: '||(v_tot_entrada - v_tot_saida)
    );
  END IF;
END;
/


-- ==================================================
-- 9. Stored Procedures and Functions             
--    Encapsulate logic for reuse and error handling.
-- ==================================================

-- 9.1 Procedure to validate and update email
-- Logic: enforce email format rules; update or raise errors
CREATE OR REPLACE PROCEDURE PROC_ATUALZ_EMAIL_ALUNO(
  p_codigo IN ALUNOS.codigo%TYPE,
  p_email  IN VARCHAR2
) IS
  v_at_count   PLS_INTEGER;
  v_pos_arroba PLS_INTEGER;
  v_dom        VARCHAR2(320);
BEGIN
  -- ensure exactly one '@'
  v_at_count := LENGTH(p_email) - LENGTH(REPLACE(p_email, '@', ''));
  IF v_at_count <> 1 THEN
    RAISE_APPLICATION_ERROR(-20010, 'Email deve conter um único "@"');
  END IF;
  -- ensure char before/after '@'
  v_pos_arroba := INSTR(p_email, '@');
  IF v_pos_arroba < 2 OR v_pos_arroba > LENGTH(p_email)-1 THEN
    RAISE_APPLICATION_ERROR(-20011, 'Caractere antes/depois de "@" inválido');
  END IF;
  -- ensure at least one dot in domain
  v_dom := SUBSTR(p_email, v_pos_arroba+1);
  IF INSTR(v_dom, '.') = 0 THEN
    RAISE_APPLICATION_ERROR(-20012, 'Deve haver pelo menos um "." após o "@"');
  END IF;
  -- perform update
  UPDATE ALUNOS
     SET EMAIL = p_email
   WHERE CODIGO = p_codigo;
  IF SQL%ROWCOUNT = 0 THEN
    RAISE_APPLICATION_ERROR(-20013, 'Aluno não encontrado: '||p_codigo);
  END IF;
END;
/

-- 9.2 Function wrapping procedure
-- Logic: call procedure and return user-friendly message
CREATE OR REPLACE FUNCTION FUNC_ATUALZ_EMAIL_ALUNO(
  p_codigo IN ALUNOS.codigo%TYPE,
  p_email  IN VARCHAR2
) RETURN VARCHAR2 IS
BEGIN
  PROC_ATUALZ_EMAIL_ALUNO(p_codigo, p_email);
  RETURN 'Atualizado com sucesso';
EXCEPTION
  WHEN OTHERS THEN
    -- return error cause truncated to 200 chars
    RETURN 'Não atualizado: ' || SUBSTR(SQLERRM,1,200);
END;
/

-- End of sql_summary.sql
