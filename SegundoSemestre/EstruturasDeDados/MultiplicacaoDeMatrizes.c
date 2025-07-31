#include <stdio.h>
#include <stdlib.h>
#define LINHA1 2
#define COLUNA1LINHA2 3
#define COLUNA2 2


int main(){
	//Declaracao de variaveis
	int matrizOriginal[LINHA1][COLUNA1LINHA2];
	int matrizTransposta[COLUNA1LINHA2][COLUNA2];
	int resultado[LINHA1][COLUNA2];
	int i,j,k;

	//Entrada de Dados
	for (i=0; i<LINHA1;i++){
		for (j=0; j<COLUNA1LINHA2; j++){
			printf("Matriz 1 [%d][%d] = ", i,j);
			scanf("%d", &matrizOriginal[i][j]);
		}
	}
	
	for (i=0; i<COLUNA1LINHA2;i++){
		for (j=0; j<COLUNA2; j++){
			printf("Matriz 2 [%d][%d] = ", i,j);
			scanf("%d", &matrizTransposta[i][j]);
		}
	}
	
	//
	printf("Matriz 1:\n");
	for (i=0; i<LINHA1;i++){
		for (j=0; j<COLUNA1LINHA2; j++){
			printf("[%d]", matrizOriginal[i][j]);
		}
		printf("\n");
	}
	
	printf("Matriz 2:\n");
	for (i=0; i<COLUNA1LINHA2;i++){
		for (j=0; j<COLUNA2; j++){
			printf("[%d]", matrizTransposta[i][j]);
		}
		printf("\n");
	}
	
	for (i=0; i<LINHA1;i++){
		for (j=0; j<COLUNA2; j++){
			resultado[i][j] = 0;
			for (k = 0; k < COLUNA1LINHA2;k++){
				resultado[i][j] += (matrizOriginal[i][k] * matrizTransposta[k][j]);	
			}
		}
	}
	printf("Resultado da multiplicacao das duas matrizes\n");
	for (i=0; i<LINHA1;i++){
		for (j=0; j<COLUNA2; j++){
			printf("[%d]", resultado[i][j]);
		}
		printf("\n");
	}
	
}

