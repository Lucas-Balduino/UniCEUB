#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exerc�cio 1 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float vlr1 = 0;
	float vlr2 = 0;
	float vlr3 = 0;
	
	printf ("Insira dois valores reais: \n");
	scanf ("%f%f", &vlr1, &vlr2);
	
	 vlr3 = vlr1 + vlr2;
	 
	printf ("O resultado da soma dos dois valores �: %f \n", vlr3);

}

