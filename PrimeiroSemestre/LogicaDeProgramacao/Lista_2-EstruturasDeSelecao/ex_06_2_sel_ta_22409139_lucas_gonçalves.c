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
		printf (" Pre�o da compra: %.2f \n Pre�o da venda: %.2f \n Voc� teve lucro!", x,y); //alt: Na sa�da, mostre tamb�m o valor do pre�o de compra e do pre�o de venda
	}
	
	if (y - x < 0)
	{
		printf (" Pre�o da compra: %.2f \n Pre�o da venda: %.2f \n Voc� teve preju�zo!", x,y); //alt: Na sa�da, mostre tamb�m o valor do pre�o de compra e do pre�o de venda
	}
	
	if (y - x == 0)
	{
		printf ("Os dois valores s�o iguais (%.2f = %.2f)", x, y);
	}


	
}
