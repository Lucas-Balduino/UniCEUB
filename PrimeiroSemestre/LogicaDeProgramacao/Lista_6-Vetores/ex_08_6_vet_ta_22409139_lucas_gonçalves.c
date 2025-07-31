#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 8

/*Selecione os elementos comuns aos dois vetores acima, armazenando-os num
terceiro vetor. No final mostre os valores selecionados, ou seja, os elementos
comuns..*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int i, j;
	char a [10];
	char b [20];
	char c [10];
	
	printf("Digite 10 caracteres\n");
	gets(a);
	
	printf("Digite 20 caracteres\n");
	gets(b);
	
	for (i = 0; i < 10; i++){
		for (j = 0; j < 20; j++){
			if (a[i] == b[j]){
				c[i] = a[i];
			}
		}
	}
	
	puts(c);
}
