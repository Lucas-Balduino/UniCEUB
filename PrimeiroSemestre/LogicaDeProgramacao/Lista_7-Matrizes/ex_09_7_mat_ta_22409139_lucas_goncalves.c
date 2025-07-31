#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 9

/*. Faça um programa que:
a) Leia uma matriz 3x3 de números inteiros.
b) Imprima-a em formato matricial.
c) Leia um número inteiro k.
d) Atualize a matriz com seu valor multiplicado por k, e imprima-a no formato matricial.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz [3][3];
    int i, j, k;
    
    
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o numero da coluna %d e linha %d\n", i,j);
            scanf("%d", &matriz[i][j]);
            
        }
    }
    
    printf("A sua matriz é:\n");
            
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("[%d]    ", matriz[i][j]);
        }
       printf("\n");
    }
    
    printf("Digite um numero k: \n");
    scanf("%d", &k);
    
    printf("A matriz alterada é: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
        	matriz[i][j] *= k;
            printf("[%d]    ", matriz[i][j]);
        }
       printf("\n");
    }
    
    
}
