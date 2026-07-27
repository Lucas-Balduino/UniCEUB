#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

void main(){
	setlocale(LC_ALL,"Portuguese");
	char matriz[5][5];
	int elementosDiagonalPrincipal[5];
	int i, j, contador = 0, indiceDaColuna, indiceDaLinha, tracoDaMatriz;
	
	printf("Digite os elementos da matriz 5x5:\n");
	for (i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	printf("\n");
	
	printf("A matriz com os elementos fica:\n");
	
	for (i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			printf("[%d]", matriz[i][j]);
			if(i == j){
				tracoDaMatriz += matriz[i][j];
				elementosDiagonalPrincipal[i] = matriz[i][j];
			}
		}
		printf("\n");
	}
	
	printf("Os elementos da diagonal principal são:\n");
	for(i = 0; i < 5; i++){
		printf("%d", elementosDiagonalPrincipal[i]);
	}
	printf("\n");
	printf("O traço dessa matriz é: %d", tracoDaMatriz);
	
}
