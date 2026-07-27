#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 7

/*Dados dois vetores, “a” com dez elementos e “b“com vinte elementos, escreva um
programa que faça a união destes dois vetores armazenando todos os elementos
num terceiro vetor. Leia os dados dos vetores “a“e “b“ e no final mostre o vetor
união.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int i;
	char a [10];
	char b [20];
	char c [30];
	
	printf("Digite 10 caracteres\n");
	gets(a);
	
	printf("Digite 20 caracteres\n");
	gets(b);
	
	strcpy(c,a);
	strcat(c,b);
	puts(c);
}
