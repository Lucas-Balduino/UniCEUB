
//Uso de Matrizes Esparsas - Uso de Cache de memória secundária

//Programa que implementa uma matriz Esparsa

#include <stdio.h>
#include <stdlib.h>

//Declaracao de contantes

#define MODULO 16

//Declaracao de Estruturas

struct no {
    int numero;
    struct no *proximoNo;
};

struct diretor
{
    int resto;
    struct no *proximoNo;
    struct diretor *proximoDiretor;
};

//Funcao que cria um diretor novo

struct diretor *criarDiretor(struct diretor *cabeca, int resto){
    struct diretor *novoDiretor = (struct diretor *) malloc (sizeof (struct diretor));

    novoDiretor -> resto = resto;
    novoDiretor -> proximoNo = NULL;
    novoDiretor -> proximoDiretor = cabeca;
    return novoDiretor;
}


//Funcao que procura o diretor correto

struct diretor *procurarDiretor (struct diretor *cabeca, int resto) {
    struct diretor *ponteiroDiretor = cabeca;
    while ((ponteiroDiretor != NULL) && (ponteiroDiretor -> resto != resto)){
        ponteiroDiretor = ponteiroDiretor -> proximoDiretor;
    }

    return ponteiroDiretor;
    
};

//Funcao que insere um no na matriz esparsa

struct diretor *inserir (struct diretor *cabeca, int numero){
    //Procurar o Diretor correto
    struct diretor *ponteiroDiretor = procurarDiretor (cabeca, (numero % MODULO));
    if (ponteiroDiretor == NULL){
        cabeca = criarDiretor(cabeca, (numero % MODULO));
        ponteiroDiretor = cabeca;
    }
    
    //Incersao propriamente dita
    struct no *novoNo = (struct no *) malloc (sizeof(struct no));
    novoNo -> numero = numero;
    novoNo-> proximoNo = ponteiroDiretor -> proximoNo;
    ponteiroDiretor -> proximoNo = novoNo;

    return cabeca;
};

//Funcao que imprime a matriz esparca na tela

void imprimir (struct diretor *cabeca){
    struct diretor *ponteiroDiretor = cabeca;
    while (ponteiroDiretor != NULL){
        printf("%d \t", ponteiroDiretor -> resto);
        struct no *ponteiroNo = ponteiroDiretor -> proximoNo;
        while (ponteiroNo != NULL){
            printf ("[%d] ", ponteiroNo -> numero);
            ponteiroNo = ponteiroNo -> proximoNo;
        }
        printf("\n");
        ponteiroDiretor = ponteiroDiretor -> proximoDiretor;
    }
}

//Funcao que remove um no da matriz esparsa
void remover (struct diretor *cabeca, int numero){
    //Cenário 1: matriz vazia
    if(cabeca == NULL){
        return;
    } 
    //Cenário 2: nao encontrei diretor
    struct diretor *ponteiroDiretor = procurarDiretor(cabeca, (numero % MODULO) );
    if (ponteiroDiretor == NULL){
        return;
    }
    //Cenário 3: Lista do diretor Vazia
    if (ponteiroDiretor -> proximoNo == NULL){
        return;
    }
    
    //Cenário 4: Excluir o primeiro
    if (ponteiroDiretor ->  proximoNo -> numero == numero){
        struct no *excluir = ponteiroDiretor -> proximoNo;
        ponteiroDiretor -> proximoNo = ponteiroDiretor -> proximoNo -> proximoNo;
        free(excluir);
        return;
    }
    
    //Procurar o no a ser removido
    struct no *anterior = ponteiroDiretor -> proximoNo;
    while ((anterior -> proximoNo != NULL) && (anterior -> proximoNo -> numero != numero)){
        anterior = anterior -> proximoNo;
    }

    //Cenario 5: Nao encontrei numero na Lista
    if (anterior -> proximoNo == NULL){
        return;
    }
    
    //Cenario 6: escluir do meio ou do final
    struct no *excluir = anterior -> proximoNo;
    anterior -> proximoNo = anterior -> proximoNo -> proximoNo;
    free(excluir);
}

//Funcao principal de execucao do programa

int main(){
    struct diretor *matrizEsparsa = NULL;
    int i = 0;
    for (i = 0; i < 50; i++){
        matrizEsparsa = inserir(matrizEsparsa, i);
        
    }
    imprimir(matrizEsparsa);
    printf("==================================================\n");

    for (i = 0; i < 10; i++){
        remover(matrizEsparsa, i);
    }

    for (i = 40; i < 50; i++){
        remover(matrizEsparsa, i);
    }
    imprimir(matrizEsparsa);

}


