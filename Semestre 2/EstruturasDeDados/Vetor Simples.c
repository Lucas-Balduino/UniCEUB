#include <stdio.h>
#include <stdlib.h>

int main(){
    //Declaracao de variaveis
    int vetor[10];
    int i;

    //Entrada de dados
    for (i=0; i<10;i++){
        printf("Digite o valor da posição %d do vetor: ",i);
        scanf("%d", &vetor[i]);
    }
    for (i=0; i<10;i++){
        printf("Vetor[%d] = %d\n", i ,vetor[i]);
    }

}
