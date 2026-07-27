#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercício 1

/*Leia quatro valores digitados pelo usuário, armazene-os num vetor e no final mostre
esses valores que estão armazenados no vetor.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int numeros [4] = {0,0,0,0};
	int numero = 0, i = 0;
	
	printf("Digite 4 numeros inteiros\n");
	
	for (i = 0; i < 4; i++){
		scanf("%d", &numero);
		numeros [i] = numero;
	}
	
	printf("O numeros digitados são:");
	
	for (i = 0; i < 4; i++){
		printf("%d ",numeros[i]);
	}
	
}
