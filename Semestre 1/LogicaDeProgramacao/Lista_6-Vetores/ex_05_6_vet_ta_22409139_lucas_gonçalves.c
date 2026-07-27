#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 5

/*Elabore um programa que leia, some e imprima o resultado da soma posicional, entre
dois vetores inteiros de 10 posições. Use um terceiro vetor para armazenar o
resultado.
*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int vet1 [10] = {1,2,3,4,5,6,7,8,9,10};
	int vet2 [10] = {10,9,8,7,6,5,4,3,2,1};
	int vet3 [10];
	int i;
	
	printf("Digite 10 valores:\n");
	for (i = 0; i < 10; i++){
		scanf("%d", &vet1[i]);
	}
	
	printf("Digite mais 10 valores:\n");
	for (i = 0; i < 10; i++){
		scanf("%d", &vet2[i]);
	}
	
	for (i = 0; i < 10; i++){
		vet3 [i] = vet1 [i] + vet2[i];
	}
	
	printf("A soma dos dois vetores é: ");
	for (i = 0; i < 10; i++){
		printf("%d ", vet3[i]);
	}
}
