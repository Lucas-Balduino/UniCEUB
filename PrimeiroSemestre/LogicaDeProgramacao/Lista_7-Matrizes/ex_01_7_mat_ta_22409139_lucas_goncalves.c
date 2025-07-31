#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz [3][4];
    int i, j;
    
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
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