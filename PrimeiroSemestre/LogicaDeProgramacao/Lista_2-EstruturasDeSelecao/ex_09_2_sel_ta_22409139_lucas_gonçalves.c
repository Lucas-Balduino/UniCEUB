#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercício 9

void main ()
{
	setlocale(LC_ALL, "Portuguese");
		
	float vlr1;
	
	printf ("Digite um valor: ");
	scanf ("%f", &vlr1);
	
	if (vlr1 >= 100)
	
	{
		printf ("O valor %.2f é maior ou igual a cem", vlr1); //alt a: Mostrar também o valor numérico lido, na tela de saída.
	}
	else 
	{
		printf ("O valor %.2f é menor do que cem", vlr1); //alt a: Mostrar também o valor numérico lido, na tela de saída.
	}
}
