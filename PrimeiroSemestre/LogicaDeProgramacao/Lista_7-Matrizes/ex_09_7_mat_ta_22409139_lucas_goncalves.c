#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 9

/*. Fa�a um programa que:
a) Leia uma matriz 3x3 de n�meros inteiros.
b) Imprima-a em formato matricial.
c) Leia um n�mero inteiro k.
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
    
    printf("A sua matriz �:\n");
            
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
    
    printf("A matriz alterada �: \n");
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
