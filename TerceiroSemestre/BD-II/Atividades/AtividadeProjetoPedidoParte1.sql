
-------------------------------------------------------------------------------
--------------------------- PROJETO CLIENTES ----------------------------------
-------------------------------------------------------------------------------
/*
//DROP TABLE CLIENTE;

CREATE TABLE CLIENTE
(
CODIGO      NUMBER,
NOME        VARCHAR2(60)  NOT NULL,
RUA         VARCHAR2(80)  NOT NULL,
NR          NUMBER (4)    NOT NULL,
BAIRRO      VARCHAR2(50)  NOT NULL,
COMPLEMENTO VARCHAR2(100) NULL,
CIDADE      VARCHAR2(50)  NOT NULL,
UF          VARCHAR2(2)   NOT NULL,
CEP         VARCHAR2(10)  NOT NULL,
CONSTRAINT PK_CLIENTE PRIMARY KEY(CODIGO)
)
;

-- TABELA PF

//DROP TABLE PF;

CREATE TABLE PF
(
CODIGO_CLI      NUMBER,
CNPF            VARCHAR2(14) NOT NULL,
RG              VARCHAR2(10) NOT NULL,
DATA_NASCIMENTO DATE         NOT NULL,
CONSTRAINT PK_CLIENTE_PF PRIMARY KEY (CODIGO_CLI),
CONSTRAINT FK_PF_CLIENTE FOREIGN KEY (CODIGO_CLI) REFERENCES CLIENTE(CODIGO)

)
;

-- TABELA PJ

//DROP TABLE PJ;

CREATE TABLE PJ
(
CODIGO_CLI      NUMBER,
CNPJ            VARCHAR2(19) NOT NULL,
IE              VARCHAR2(10) NOT NULL,
NOME_FANTASIA   VARCHAR2(60) NOT NULL,
CONSTRAINT PK_CLIENTE_PJ PRIMARY KEY (CODIGO_CLI),
CONSTRAINT FK_PJ_CLIENTE FOREIGN KEY (CODIGO_CLI) REFERENCES CLIENTE(CODIGO)
)
;


-- TABELA FONE CLIENTE

//DROP TABLE FONE_CLIENTE;

CREATE TABLE FONE_CLIENTE
(
NUMERO      VARCHAR2(14),
CODIGO_CLI  NUMBER,
CONSTRAINT PK_FONE_CLIENTE PRIMARY KEY (CODIGO_CLI),
CONSTRAINT FK_FONE_CLIENTE FOREIGN KEY (CODIGO_CLI) REFERENCES CLIENTE(CODIGO)
)
;

-- TABELA PRODUTO

//DROP TABLE PRODUTO;

CREATE TABLE PRODUTO
(
CODIGO      NUMBER,
DESCRICAO   VARCHAR2(80) NOT NULL,
UNID_MEDIDA VARCHAR2(10) NOT NULL,
CONSTRAINT PK_PRODUTO PRIMARY KEY(CODIGO)
)
;

-- TABELA VENDEDOR

//DROP TABLE VENDEDOR;

CREATE TABLE VENDEDOR
(
MATRICULA   NUMBER,
NOME        VARCHAR2(60) NOT NULL,
CNPF        VARCHAR2(10) NOT NULL,
CONSTRAINT PK_VENDEDOR PRIMARY KEY(MATRICULA)
)
;

-- TABELA FONE VENDEDOR

//DROP TABLE FONE_VENDEDOR;

CREATE TABLE FONE_VENDEDOR
(
NUMERO         VARCHAR2(14),
MATRICULA_VEN  NUMBER,
CONSTRAINT PK_FONE_VENDEDOR PRIMARY KEY (NUMERO, MATRICULA_VEN), 
CONSTRAINT FK_FONE_VENDEDOR FOREIGN KEY (MATRICULA_VEN) REFERENCES VENDEDOR(MATRICULA)
)
;

-- TABELA PRATELEIRA

//DROP TABLE PRATELEIRA;

CREATE TABLE PRATELEIRA
(
CODIGO        NUMBER(3),
DESCRICAO     VARCHAR2(50) NOT NULL,
NUMERO_SECOES NUMBER(2)    NOT NULL,
CONSTRAINT PK_PRATELEIRA PRIMARY KEY(CODIGO)
)
;
*/
/*==============================================================*/
/* Table: CLIENTE */
/*==============================================================*/

DROP TABLE CLIENTE CASCADE CONSTRAINT;
create table CLIENTE (
CODIGO NUMBER not null,
NOME varchar2(60) not null,
RUA varchar2(80) not null,
NR NUMBER(4) not null,
BAIRRO varchar2(50) not null,
COMPLEMENTO varchar2(100),
CIDADE varchar2(50) not null,
UF varchar2(2) not null,
CEP varchar2(10) not null,
constraint PK_CLIENTE primary key (CODIGO)
);
/*==============================================================*/
/* Table: VENDEDOR */
/*==============================================================*/
DROP TABLE VENDEDOR CASCADE CONSTRAINT;
create table VENDEDOR (
MATRICULA NUMBER not null,
NOME varchar2(60) not null,
CNPF varchar2(14) not null,
constraint PK_VENDEDOR primary key (MATRICULA)
);
/*==============================================================*/
/* Table: FONE_CLIENTE */
/*==============================================================*/
DROP TABLE FONE_CLIENTE CASCADE CONSTRAINT;

create table FONE_CLIENTE (
NUMERO varchar2(14) not null,
CODIGO_CLI NUMBER not null,
constraint PK_FONE_CLIENTE primary key (NUMERO, CODIGO_CLI),
constraint FK_FONE_CLIENTE foreign key (CODIGO_CLI) references CLIENTE (CODIGO)
);
/*==============================================================*/
/* Table: FONE_VENDEDOR */
/*==============================================================*/
DROP TABLE FONE_VENDEDOR CASCADE CONSTRAINT;
create table FONE_VENDEDOR (
NUMERO varchar2(14) not null,
MATRICULA_VEN NUMBER not null,
constraint PK_FONE_VENDEDOR primary key (NUMERO, MATRICULA_VEN),
constraint FK_FONE_VENDEDOR foreign key (MATRICULA_VEN) references VENDEDOR
(MATRICULA)
);
/*==============================================================*/
/* Table: PF */
/*==============================================================*/
DROP TABLE PF;
create table PF (
CODIGO_CLI NUMBER not null,
CNPF varchar2(14) not null,
RG varchar2(10) not null,
DATA_NASCIMENTO DATE not null,
constraint PK_PF primary key (CODIGO_CLI),
constraint FK_PF_CLIENTE foreign key (CODIGO_CLI) references CLIENTE (CODIGO)
);
/*==============================================================*/
/* Table: PJ */
/*==============================================================*/
DROP TABLE Pj;
create table PJ (
CODIGO_CLI NUMBER not null,
CNPJ varchar2(19) not null,
IE varchar2(10) not null,
NOME_FANTASIA varchar2(60) not null,
constraint PK_PJ primary key (CODIGO_CLI),
constraint FK_PJ_CLIENTE foreign key (CODIGO_CLI) references CLIENTE (CODIGO)
);

/*==============================================================*/
/* Table: PRATELEIRA */
/*==============================================================*/
DROP TABLE PRATELEIRA CASCADE CONSTRAINT;
create table PRATELEIRA (
CODIGO NUMBER(3) not null,
DESCRICAO varchar2(50) not null,
NUMERO_SECOES NUMBER(2) not null,
constraint PK_PRATELEIRA primary key (CODIGO)
);
/*==============================================================*/
/* Table: PRODUTO */
/*==============================================================*/
DROP TABLE PRODUTO CASCADE CONSTRAINT;
create table PRODUTO (
CODIGO NUMBER not null,
DESCRICAO varchar2(80) not null,
UNID_MEDIDA varchar2(10) not null,
constraint PK_PRODUTO primary key (CODIGO)
);