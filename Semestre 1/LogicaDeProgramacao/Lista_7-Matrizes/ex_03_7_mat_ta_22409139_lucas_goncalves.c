#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 3

/*Construa um programa que efetue a leitura, a soma posicional 
e a impressão do resultado, entre duas matrizes inteiras que comportem
25 elementos. Use uma terceira matriz para armazenar o resultado*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz1 [5][5];
    int matriz2 [5][5];
    int resultado [5][5];
    int i, j;
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o numero da coluna %d e linha %d\n", i,j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o numero da coluna %d e linha %d\n", i,j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            resultado[i][j]= matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("A sua matriz é:\n");
            
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d]    ", resultado[i][j]);
        }
       printf("\n");
    }
    
}