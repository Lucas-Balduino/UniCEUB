#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 7

/*Elabore um programa que gere a sequęncia dos números inteiros, onde o usuário
deverá fornecer o valor inicial e o valor final dessa sequęncia.
*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	int valor1, valor2, i;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d",&valor1);
	
	printf("Digite o segundo valor:\n");
	scanf("%d",&valor2);
	
	if (valor1 < valor2)
	{
		printf("A sequencia de numeros entre %d e %d é\n", valor1, valor2);
		for (i = valor1; i <= valor2; i++)
		{
			printf("%d\n", i);
		}
	}
	
	if (valor1 > valor2)
	{
		printf("A sequencia de numeros entre %d e %d é\n", valor2, valor1);
		for (i = valor2; i <= valor1; i++)
		{
			printf("%d\n", i);
		}
	}
}
