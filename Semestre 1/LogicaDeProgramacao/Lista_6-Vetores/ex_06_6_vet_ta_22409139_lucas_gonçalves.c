#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 6

/*Construa um programa que preencha um vetor de 100 elementos inteiros, colocando
"1" na posição (= índice do vetor) correspondente a um número par e "0" na posição
(= índice do vetor) correspondente a um número ímpar.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int i;
	int vetor[100];
	
	for (i = 0; i < 100; i++){
		if (i % 2 == 0){
			vetor[i] = 1;
		}
		if (i % 2 != 0){
			vetor[i] = 0;
		}
	}
		
	for (i = 0; i < 100; i++){
		printf("%d", vetor[i]);
	}
}
