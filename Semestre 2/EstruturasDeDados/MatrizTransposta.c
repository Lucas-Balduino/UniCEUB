#include <stdio.h>
#include <stdlib.h>
#define LINHAS 2
#define COLUNAS 3

int main(){
	//Declaracao de variaveis
	int matrizOriginal[LINHAS][COLUNAS];
	int matrizTransposta[COLUNAS][LINHAS];
	int i,j;

	//Entrada de Dados
	for (i=0; i<LINHAS;i++){
		for (j=0; j<COLUNAS; j++){
			printf("Matriz[%d][%d] = ", i,j);
			scanf("%d", &matrizOriginal[i][j]);
		}
	}
	
	for (i=0; i<LINHAS;i++){
		for (j=0; j<COLUNAS; j++){
			printf("[%d]", matrizOriginal[i][j]);
		}
		printf("\n");
	}
	
	for (i=0; i<LINHAS;i++){
		for (j=0; j<COLUNAS; j++){
			matrizTransposta[j][i] = matrizOriginal[i][j] ;
		}
	}
	
	for (i=0; i<COLUNAS;i++){
		for (j=0; j<LINHAS; j++){
			printf("[%d]", matrizTransposta[i][j]);
		}
		printf("\n");
	}
	
}

