#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 6

/*Construa um programa que imprime a soma de todos os valores positivos
digitados pelo usuário até que ele digite um número negativo.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero, soma;
	printf("Digite um sequencia de numeros \n(utilize um numero negativo como saída)\n");
	do 
	{
		scanf("%d",&numero);
		if (numero > 0)
		{
			soma+=numero;
		}
	}
	while (numero > 0);
	printf("A soma dos numeros digitados é %d", soma);
}
