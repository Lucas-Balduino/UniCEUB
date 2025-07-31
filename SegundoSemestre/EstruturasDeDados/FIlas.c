//Programa que implementa uma fila

#include <stdio.h>
#include <stdlib.h>

//Declaração da estrutura do no

struct no {
    int numero;
    struct no *proximo;
};

//Funcao que insere um no na fila

struct no *entrar(struct no *cabeca, int numero){
    //Alocacao da memoria para o no 
    struct no *novoNo = (struct no *) malloc(sizeof(struct no));
    novoNo -> numero = numero;
    novoNo -> proximo = cabeca;

    return novoNo;
}

//Funcao que remove no da fila
struct no *sair(struct no *cabeca){
    //Caso facil: Fila Vazia
    if(cabeca == NULL){
        return cabeca;
    }
    
    //Caso medio facil: Fila so tem um unico no
    if (cabeca -> proximo == NULL){
        printf("%d\n", cabeca -> numero);
        free(cabeca);
        return NULL;
    }

    //Caso Dificil: fila tem varios nos
    struct no *ponteiro = cabeca;
    while (ponteiro -> proximo -> proximo != NULL){
        ponteiro = ponteiro -> proximo;
    }
    printf("%d\n", ponteiro -> proximo -> numero);
    free(ponteiro -> proximo);
    ponteiro -> proximo = NULL;
    
    return cabeca;
}

//Funcao principal de execução do programa

int main(){
    struct no *fila = NULL;
    int i;
    
    for (i = 0; i < 10; i++){
        fila = entrar(fila,i);
    }
    
    for (i = 0; i < 10; i++){
        fila = sair(fila);
    }
    
}


