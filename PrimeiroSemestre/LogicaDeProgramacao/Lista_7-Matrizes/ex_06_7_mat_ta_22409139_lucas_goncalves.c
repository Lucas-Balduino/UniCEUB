#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 6

/*Refa�a o problema quatro para obter a m�dia aritm�tica dos valores de cada linha. 
No final exiba um relat�rio com o n�mero da linha e o correspondente valor calculado.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz [4][5];
    int i, j;
    int mediaLinha1 = 0;
    int mediaLinha2 = 0;
    int mediaLinha3 = 0;
    int mediaLinha4 = 0;
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o numero da coluna %d e linha %d\n", i,j);
            scanf("%d", &matriz[i][j]);
            if(i == 0){
                mediaLinha1 += matriz[i][j];
            }
            if(i == 1){
                mediaLinha2 += matriz[i][j];
            }
            if(i == 2){
                mediaLinha3 += matriz[i][j];
            }
            if(i == 3){
                mediaLinha4 += matriz[i][j];
            }
        }
    }
     mediaLinha1 /= 5;
     mediaLinha2 /= 5;
     mediaLinha3 /= 5;
     mediaLinha4 /= 5;
    
    printf("A sua matriz �:\n");
            
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("[%d]    ", matriz[i][j]);
        }
       printf("\n");
    }

    printf("A media dos elementos da linha 1 � %d\n",mediaLinha1);
    printf("A media dos elementos da linha 2 � %d\n",mediaLinha2);
    printf("A media dos elementos da linha 3 � %d\n",mediaLinha3);
    printf("A media dos elementos da linha 4 � %d\n",mediaLinha4);
}
