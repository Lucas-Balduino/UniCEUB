#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declaracao de variaveis
	int vetorOriginal[5];
	int vetorInvertido[5];
	int i;

	//Entrada de Dados
	for (i=0; i<5;i++){
		printf("Vetor[%d] = ", i);
		scanf("%d", &vetorOriginal[i]);
	}
	
	//Processamento
	for (i=0; i<5;i++){
		vetorInvertido[5 - 1 - i] = vetorOriginal[i];
	
	}
	
	for (i=0; i<5;i++){
		printf("VetorInvertido[%d] = %d\n", i, vetorInvertido[i]);
	}

}

