//Programa que implementa uma pilha

#include <stdio.h>
#include <stdlib.h>

//Declaração da estrutura do no

struct no {
    int numero;
    struct no *proximo;
};

//Funcao que insere um no na pilha, push - nome padrao

struct no *push(struct no *cabeca, int numero){
    //Alocacao da memoria para o no 
    struct no *novoNo = (struct no *) malloc(sizeof(struct no));
    novoNo -> numero = numero;
    novoNo -> proximo = cabeca;

    return novoNo;
}

//Funcao que remove no da pilha, pop - nome padrao
struct no *pop(struct no *cabeca){
    //Caso facil: Pilha Vazia
    if(cabeca == NULL){
        return cabeca;
    }
    struct no *excluir = cabeca;
    cabeca = cabeca -> proximo;
    printf("%d\n", excluir -> numero);
    free(excluir);
    
    return cabeca;
}

//Funcao principal de execução do programa

int main(){
    struct no *pilha = NULL;
    int i;
    
    for (i = 0; i < 10; i++){
        pilha = push(pilha,i);
    }
    
    for (i = 0; i < 10; i++){
        pilha = pop(pilha);
    }
    
}


