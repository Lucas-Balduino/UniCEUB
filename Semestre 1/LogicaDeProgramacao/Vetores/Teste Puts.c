#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(void){
	setlocale(LC_ALL,"Portuguese");
	int i;
	char vet[40];
	
	printf("\n Digite seu nome:");
	gets(vet);
	
	puts("Olá");
	puts(vet);
}
