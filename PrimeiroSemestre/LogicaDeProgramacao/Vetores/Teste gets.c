#include <stdio.h>
#include <locale.h>
#include <string.h>
void main(void){
 	int i;
	char vet[0];
	
	printf("\n Digite seu nome:");
	gets(vet);
	
	printf("\n O seu nome %s possui %d caracteres ",vet,strlen(vet));
}

