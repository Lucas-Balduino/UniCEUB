#include <stdio.h>
#include <locale.h>
#include <string.h>

/*Leia quatro valores digitados pelo usuário, armazene-os num vetor e no final mostre
esses valores que estão armazenados no vetor.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int numeros [4] = {0,0,0,0};
	int numero = 0, i = 0;
	
	printf("Digite 4 numeros inteiros\n");
	
	
	for (i = 0; i < len(numeros); i++){
		scanf("%d", &numero);
		numeros [i] = numero;
	}
	
	printf("O numeros digitados na ordem inversa é: ");
	
	for (i = 3; i >= 0; i--){
			printf("%d ",numeros[i]);
	}
	
}
