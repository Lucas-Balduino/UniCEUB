#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Execício 6

/*Faça um programa que some os algarismos de um número do tipo unsigned long int
e ao final da execução exiba o número digitado e o somatório de seus algarismos*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	unsigned long int i, numero, soma = 0;
	
	printf("Digite um numero inteiro e positivo:\n");
	scanf("%lu",&numero);
	
	for (i = numero ; i > 0; i /= 10)
	{
		soma += i % 10;
	}
	
	printf("A soma dos algaritmos de %lu, é %lu", numero, soma);
}
