//Programa que implementa um Deque

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Declaração da estrutura do no

struct no {
    int numero;
    struct no *proximo;
};

//Declaracao da estrutura de Deque, aponta para a cabeca de cada fila

struct deque {
    struct no *filaNormal;
    struct no *filaPreferencial;
};

//Funcao que insere um nó no deque

struct no *entrar(struct deque *cabeca, bool tipo, int numero){
    //Alocacao da memoria para o no 
    struct no *novoNo = (struct no *) malloc(sizeof(struct no));
    novoNo -> numero = numero;
    novoNo -> proximo = NULL;

    //Insercao na fila propriamente dito
    if (tipo){ //True = Normal
        novoNo -> proximo = cabeca -> filaNormal;
        cabeca -> filaNormal =  novoNo;
    } else{ //False = Preferencial
        novoNo -> proximo = cabeca -> filaPreferencial;
        cabeca -> filaPreferencial =  novoNo;
    }
    
    return cabeca;
}

//Funcao que retira de qualquer fila

struct no *sair(struct no *fila){
    
    //Caso Fila Vazia
    if(fila == NULL){
        return NULL;
    }

    //Caso Primeiro da Fila
    if(fila -> proximo == NULL){
        printf("%d\n", fila -> numero);
        free(fila);
        return NULL;
    }

    //Caso Mais de um Na fila
    struct no *penultimo = fila;
    while (penultimo -> proximo -> proximo != NULL){
        penultimo = penultimo -> proximo;
    }
    printf("%d\n", penultimo -> proximo -> numero);
    free(penultimo -> proximo);
    penultimo -> proximo = NULL;
    return fila;
}

//Funcao de antedimento

void atender(struct deque *cabeca, int *contador){
    
    //Caso Fila Vazia
    if ((cabeca -> filaNormal == NULL) && (cabeca -> filaPreferencial == NULL)){
        return;
    }

    //Caso so tem na fila Normal
    if (cabeca -> filaPreferencial == NULL){
        cabeca -> filaNormal = sair(cabeca -> filaNormal);
        return;
    }

    //Caso so tem na fila Preferencial
    if (cabeca -> filaNormal == NULL){
        cabeca -> filaPreferencial = sair(cabeca -> filaPreferencial);
        return;
    }
    
    //Caso tem nas duas Filas
    if (*contador > 4){
        cabeca -> filaNormal = sair (cabeca -> filaNormal);
        *contador = 0;
    } else {
        cabeca -> filaPreferencial = sair(cabeca -> filaPreferencial);
        (*contador)++;
    }
    
}

//Funcao principal de execução do programa

int main(){
    struct deque *cabeca = (struct deque *) malloc(sizeof(struct deque));
    cabeca -> filaNormal = NULL;
    cabeca -> filaPreferencial = NULL;
    int i;
    int contador = 0;
    
    for (i = 0; i < 10; i++){
        cabeca = entrar(cabeca, true, i);
    }
    
    for (i = 100; i < 110; i++){
        cabeca = entrar(cabeca, false, i);
    }
    
    for (i = 0; i < 100; i++){
        atender(cabeca, &contador);
    }
    
}
