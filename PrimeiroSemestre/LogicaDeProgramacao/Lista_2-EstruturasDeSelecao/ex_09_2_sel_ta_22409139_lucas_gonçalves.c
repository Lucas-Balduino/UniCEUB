#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exerc�cio 9

void main ()
{
	setlocale(LC_ALL, "Portuguese");
		
	float vlr1;
	
	printf ("Digite um valor: ");
	scanf ("%f", &vlr1);
	
	if (vlr1 >= 100)
	
	{
		printf ("O valor %.2f � maior ou igual a cem", vlr1); //alt a: Mostrar tamb�m o valor num�rico lido, na tela de sa�da.
	}
	else 
	{
		printf ("O valor %.2f � menor do que cem", vlr1); //alt a: Mostrar tamb�m o valor num�rico lido, na tela de sa�da.
	}
}
