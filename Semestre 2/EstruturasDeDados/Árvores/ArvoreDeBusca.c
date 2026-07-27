
/*
Conceitos:
Por padrao uma arvore ja tem seus filhos definidos
Arvore em que cada no comtem um elemento de um conjunto ordenavel
Cada no r com subarvores esquerda Te e direita Td satisfaz as seguintes propriedades
    # e < r para todo elemento e pertence Te
    # d > r para todo elemento e pertence Td
*/

//Programa que Implementa uma Arvore de Busca

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
    if (raiz -> numero > numero) {
        raiz -> esquerda = inserir (raiz -> esquerda, numero);
    } else{
        raiz -> direita = inserir (raiz -> direita, numero);
    }
    return raiz;
}

//Funcao que procura um no na arvore

void procurar (struct no *raiz, int numero){
    //Caso 1: Arvore Vazia
    if (raiz == NULL){
        printf ("Nao encontrei :C");
        return;
    }

    //Caso 2: numero procurado esta na raiz
    if (raiz -> numero == numero){
        printf("Encontrei! :D");
        return;
    }

    //Caso dificil: numero nao esta na raiz
    if (raiz -> numero > numero){
        procurar(raiz -> esquerda, numero);
    } else {
        procurar(raiz -> direita, numero);
    }
    
    
}

//Funcao que navega a arvore em Em-Ordem

void navegarEmOrdem (struct no *raiz){
    //Caso 1: Raiz vazia
    if (raiz == NULL){
        return;
    }
    //Caso 2: Navegacao Normal
    navegarEmOrdem(raiz ->esquerda);
    printf("%d, ", raiz -> numero);
    navegarEmOrdem(raiz ->direita);
}

//Funcao Principal de Execucao do Programa

int main(){

    //Declaracao de variaveis
    struct no *arvore = NULL;
    int i = 0;
    int numero = 0;

    time_t t;
    srand(time(&t));
    
    //Contrucao da arvore
    for (i = 0; i < 100; i++){
        arvore = inserir(arvore, rand() % 100);
    }

    //Navegacao da Arvore

    printf("\nEm-Ordem: ");
    navegarEmOrdem(arvore);

    while (1){
        printf("\nDigite um numero: ");
        scanf("%d", &numero);
        procurar(arvore, numero);
    }
    
}
