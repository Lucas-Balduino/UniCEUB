#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(void){
	char vet[40];
	char nome[40]="Charlie e Lola";
	
	printf("\n Digite seu nome:");
	gets(vet);
	
	strcpy(vet,nome);
	
	puts(nome);
	puts(vet);
}
