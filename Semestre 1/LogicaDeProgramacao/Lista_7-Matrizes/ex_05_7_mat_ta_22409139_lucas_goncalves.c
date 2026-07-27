#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 5

/*Somar uma matriz por coluna, ou seja, obter o total de cada coluna da matriz. 
No final gere uma tela de saída mostrando esses valores e o total geral de toda 
a matriz. Use uma matriz 4 x 5.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz [4][5];
    int i, j;
    int somaColuna1 = 0;
    int somaColuna2 = 0;
    int somaColuna3 = 0;
    int somaColuna4 = 0;
    int somaColuna5 = 0;
    int somaMatriz = 0;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o numero da coluna %d e linha %d\n", i,j);
            scanf("%d", &matriz[i][j]);
            if(j == 0){
                somaColuna1 += matriz[i][j];
            }
            if(j == 1){
                somaColuna2 += matriz[i][j];
            }
            if(j == 2){
                somaColuna3 += matriz[i][j];
            }
            if(j == 3){
                somaColuna4 += matriz[i][j];
            }
            if (j == 4){
            	somaColuna5 += matriz[i][j];
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
    somaMatriz = somaColuna1 + somaColuna2 + somaColuna3 + somaColuna4 + somaColuna5;

    printf("A soma dos elementos da coluna 1 é %d\n",somaColuna1);
    printf("A soma dos elementos da coluna 2 é %d\n",somaColuna2);
    printf("A soma dos elementos da coluna 3 é %d\n",somaColuna3);
    printf("A soma dos elementos da coluna 4 é %d\n",somaColuna4);
    printf("A soma dos elementos da coluna 5 é %d\n",somaColuna5);
	printf("A soma dos elementos da matriz inteira é %d\n",somaMatriz);
    
}
