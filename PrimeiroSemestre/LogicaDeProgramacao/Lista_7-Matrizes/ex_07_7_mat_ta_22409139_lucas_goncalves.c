#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 7

/*Na matriz 4 x 5 do problema quatro, selecione a linha que tem o maior total, ou seja, soma
dos valores da linha. No final mostre o maior total encontrado e em qual linha ele se encontra.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz [4][5];
    int i, j;
    int somaLinha1 = 0;
    int somaLinha2 = 0;
    int somaLinha3 = 0;
    int somaLinha4 = 0;
    int maiorSoma = 0;
    int maiorLinha = 0;
    
    
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o numero da coluna %d e linha %d\n", i,j);
            scanf("%d", &matriz[i][j]);
            if(i == 0){
                somaLinha1 += matriz[i][j];
                if(somaLinha1 > maiorSoma){
                maiorSoma = somaLinha1;
                maiorLinha = 1;
				}
            }
            if(i == 1){
                somaLinha2 += matriz[i][j];
                if(somaLinha2 > maiorSoma){
                maiorSoma = somaLinha2;
                maiorLinha = 2;
				}
            }
            if(i == 2){
                somaLinha3 += matriz[i][j];
                if(somaLinha3 > maiorSoma){
                maiorSoma = somaLinha3;
                maiorLinha = 3;	
				}
            }
            if(i == 3){
                somaLinha4 += matriz[i][j];
                if(somaLinha4 > maiorSoma){
                maiorSoma = somaLinha4;
                maiorLinha = 4;
				}
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

    printf("A soma dos elementos da linha 1 é %d\n",somaLinha1);
    printf("A soma dos elementos da linha 2 é %d\n",somaLinha2);
    printf("A soma dos elementos da linha 3 é %d\n",somaLinha3);
    printf("A soma dos elementos da linha 4 é %d\n",somaLinha4);
    printf("A linha com maior valor total é a Linha %d com %d de valor total\n",maiorLinha, maiorSoma);
    
}
