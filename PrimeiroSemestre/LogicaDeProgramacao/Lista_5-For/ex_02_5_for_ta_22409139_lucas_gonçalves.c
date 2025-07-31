#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que imprime todos os números entre 30 e 5 (nesta ordem) 
divisíveis por 3, e no final imprime sua soma*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	int numero; 
	int soma = 0;
	for (numero = 30; numero >= 5; numero--)
	{
		if (numero % 3 == 0)
		{
			printf("%d \n",numero);
			soma += numero;
		}
	}
	printf("A soma dos numeros divisiveis por 3 no intervalo de 30 a 5 é %d", soma);
}
