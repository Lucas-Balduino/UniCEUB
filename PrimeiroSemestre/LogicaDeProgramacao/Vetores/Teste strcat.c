#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(void){ 
	setlocale(LC_ALL,"Portuguese");
	
	char vet[40]="Olá ";
	char nome[40];
	
	printf("\n Digite seu nome:");
	gets(nome);
	
	strcat(vet,nome);
	
	puts(vet);
}
