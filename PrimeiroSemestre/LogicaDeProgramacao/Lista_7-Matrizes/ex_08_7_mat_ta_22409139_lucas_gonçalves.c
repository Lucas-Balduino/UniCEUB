#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

//Exercicio 8

/* Crie um Algoritmo para ler 25 nomes digitados pelo usu�rio e imprimir o nome caso este
seja 'maria', informando que posi��o (linha) este se encontra dentro da matriz.
a) Converta todos os caracteres digitados para mai�sculas sem utilizar uma fun��o
para isso. Observe a tabela ASCII.
b) Conte o total de caracteres convertidos para mai�sculos e apresente o valor no final.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    char matriz [25][20];
    int i, j, linhaMaria = -1, contador = 0, contadorMaiusculas = 0;
    
    printf("Digite 25 nomes\n");
    
	for (i = 0; i < 25; i++)
    {
        for (j = 0; j < 20; j++)
        {
            matriz[i][j] = getche();
			if (matriz[i][j] == 13){
				matriz[i][j] = 0;
			}

            if (matriz[i][j] >= 97 && matriz[i][j] <= 122){
            	matriz[i][j] -= 32;
            	contadorMaiusculas++;
			}
            
            if(matriz[i][j]=='M' && j == 0){
            	contador++;
			}
			if(matriz[i][j]=='A'&& j == 1){
            	contador++;
			}
			if(matriz[i][j]=='R'&& j == 2){
            	contador++;
			}
			if(matriz[i][j]=='I'&& j == 3){
            	contador++;
			}
			if(matriz[i][j]=='A'&& j == 4){
            	contador++;
			}
			if (matriz[i][j]== 0 && j == 5){
				contador++;
			}
			
			if (contador == 6){
				linhaMaria = i;
			}

			if (matriz[i][j] == 0){
				break;
			}
        }
        contador = 0;
        printf("\n");
    }
    
    printf("A matriz com os nomes fica:\n");
            
    for (i = 0; i < 25; i++)
    {
    	printf("[");
        for (j = 0; j < 20; j++)
        {
			if (matriz[i][j]==0){
				break;
			}
			
            printf("%c", matriz[i][j]);
        }
       printf("]\n");
    }
    if(linhaMaria != -1){
    	printf("O nome Maria foi digitado na linha %d\n", linhaMaria + 1);	
	}
	else{
		printf("O nome Maria n�o foi encontrado\n");	
	}
    printf("%d caracteres foram convertidos para maiusculas", contadorMaiusculas);
    
}
