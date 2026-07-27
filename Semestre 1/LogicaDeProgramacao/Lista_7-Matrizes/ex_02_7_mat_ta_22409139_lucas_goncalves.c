#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 2

/*No programa anterior, nós percorremos a matriz linha por linha,
ou seja, fixamos o valorda linha e variamos a coluna. Agora vamos
refazê-lo percorrendo a matriz coluna por coluna, ou seja, fixamos
o valor da coluna e variamos a linha. No final mostre os valores
armazenados na matriz.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz [3][4];
    int i, j;
    
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 3; i++)
        {
            printf("Digite o numero da coluna %d e linha %d\n", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("A sua matriz é:\n");
            
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("[%d]    ", matriz[i][j]);
        }
       printf("\n");
    }
    
}