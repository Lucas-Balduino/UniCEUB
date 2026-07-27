#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 4

/*Somar uma matriz por linha, ou seja, obter o total de cada linha da matriz. 
No final gere uma tela de saída mostrando esses valores e o total geral de toda
a matriz. Use uma matriz 4 x 5.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz [4][5];
    int i, j;
    int somaLinha1 = 0;
    int somaLinha2 = 0;
    int somaLinha3 = 0;
    int somaLinha4 = 0;
    int somaMatriz = 0;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o numero da coluna %d e linha %d\n", i,j);
            scanf("%d", &matriz[i][j]);
            if(i == 0){
                somaLinha1 += matriz[i][j];
            }
            if(i == 1){
                somaLinha2 += matriz[i][j];
            }
            if(i == 2){
                somaLinha3 += matriz[i][j];
            }
            if(i == 3){
                somaLinha4 += matriz[i][j];
            }
        }
    }
    
    printf("A sua matriz é:\n");
            
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d]    ", matriz[i][j]);
        }
       printf("\n");
    }
    somaMatriz = somaLinha1 + somaLinha2 + somaLinha3 + somaLinha4;

    printf("A soma dos elementos da linha 1 é %d\n",somaLinha1);
    printf("A soma dos elementos da linha 2 é %d\n",somaLinha2);
    printf("A soma dos elementos da linha 3 é %d\n",somaLinha3);
    printf("A soma dos elementos da linha 4 é %d\n",somaLinha4);
    printf("A soma dos elementos da matriz inteira é %d\n",somaMatriz);
    
}