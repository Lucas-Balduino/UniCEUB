#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 6 lista

void main (void)
{
	setlocale (LC_ALL, "Portuguese");

	float x,y;

	printf ("Digite o valor de compra: \n");
	scanf ("%f", &x);

	printf ("Digite o valor de venda: \n");
	scanf ("%f", &y);
	
	if (y - x > 0)
	{
		printf (" Preço da compra: %.2f \n Preço da venda: %.2f \n Você teve lucro!", x,y); //alt: Na saída, mostre também o valor do preço de compra e do preço de venda
	}
	
	if (y - x < 0)
	{
		printf (" Preço da compra: %.2f \n Preço da venda: %.2f \n Você teve prejuízo!", x,y); //alt: Na saída, mostre também o valor do preço de compra e do preço de venda
	}
	
	if (y - x == 0)
	{
		printf ("Os dois valores são iguais (%.2f = %.2f)", x, y);
	}


	
}
