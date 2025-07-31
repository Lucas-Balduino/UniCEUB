
/*
Conceitos:
Arvore binaria: Arvore cuja ordem é 2 //Programa que implementa uma fila
Com a Altura h tem no minimo h nos, e no maximo 2^h - 1 nos
Se a arvore tem n>=1 nos entao
#Altura no minimo log(n+1) - quando a arvore é completa
#Altura é no maximo n - quando cada no nao-terminal tem apenas um filho

Travessia 
#Pre-ordem:
    Primeiro raiz
    Segundo Subarvore Esquerda
    Terceiro Subarvore Direita
#Em-Ordem:
    Primeiro Subarvore Esquerda
    Segundo Raiz
    Terceiro Subarvore Direita
#Pos-Ordem:
    Primeiro Subarvore Esquerda
    Segundo Subarvore Direita
    Terceiro Raiz
*/

//Programa que Implementa uma Arvore Binaria

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Declaração da estrutura do no

struct no {
    int numero;
    struct no *esquerda;
    struct no *direita;
};

//Funcao que insere um no na arvore

struct no *inserir(struct no *raiz, int numero) {
    //Caso 1: Arvore vazia
    if (raiz == NULL){
        raiz = (struct no *) malloc (sizeof(struct no));
        raiz -> numero = numero;
        raiz -> esquerda = NULL;
        raiz -> direita = NULL;
        return raiz;
    }
        
    //Caso 2: Arvore nao vazia
    int sorteio = (rand() % 2); //Sorteio de um numero entre 1 e 2
    if (sorteio) {
        raiz -> esquerda = inserir (raiz -> esquerda, numero);
    } else{
        raiz -> direita = inserir (raiz -> direita, numero);
    }
    return raiz;
}

//Funcao que navega a arvore em Pre-Ordem

void navegarPreOrdem (struct no *raiz){
    //Caso 1: Raiz vazia
    if (raiz == NULL){
        return;
    }
    printf("%d, ", raiz -> numero);
    navegarPreOrdem(raiz ->esquerda);
    navegarPreOrdem(raiz ->direita);
}

//Funcao que navega a arvore em Pos-Ordem

void navegarEmOrdem (struct no *raiz){
    //Caso 1: Raiz vazia
    if (raiz == NULL){
        return;
    }
    navegarEmOrdem(raiz ->esquerda);
    printf("%d, ", raiz -> numero);
    navegarEmOrdem(raiz ->direita);
}

//Funcao que navega a arvore em Pos-Ordem

void navegarPosOrdem (struct no *raiz){
    //Caso 1: Raiz vazia
    if (raiz == NULL){
        return;
    }
    navegarPosOrdem(raiz ->esquerda);
    navegarPosOrdem(raiz ->direita);
    printf("%d, ", raiz -> numero);
}

//Funcao Principal de Execucao do Programa

int main (){

    //Declaracao de variaveis
    struct no *arvore = NULL;
    int i = 0;
    time_t t;
    srand(time(&t));
    
    for (i = 0; i < 10; i++){
        arvore = inserir(arvore, i);
    }

    printf("Pre-Ordem: ");
    navegarPreOrdem (arvore);
    printf("\nEm-Ordem: ");
    navegarEmOrdem (arvore);
    printf("\nPos-Ordem: ");
    navegarPosOrdem (arvore);
}
