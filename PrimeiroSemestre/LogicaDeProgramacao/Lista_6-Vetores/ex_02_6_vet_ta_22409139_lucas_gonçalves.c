#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exerc�cio 2

/*Refa�a o programa anterior, mostrando os valores armazenados no vetor na ordem
inversa da entrada.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int numeros [4] = {0,0,0,0};
	int numero = 0, i = 0;
	
	printf("Digite 4 numeros inteiros\n");
	
	for (i = 0; i < 4; i++){
		scanf("%d", &numero);
		numeros [i] = numero;
	}
	
	printf("O numeros digitados na ordem inversa �: ");
	
	for (i = 3; i >= 0; i--){
		printf("%d ",numeros[i]);
	}
	
}
