#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exerc�cio 2 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	int vlr1 = 0;
	int vlr2 = 0;
	int vlr3 = 0;
	
	printf ("Insira dois valores inteiros: \n");
	scanf ("%d%d", &vlr1, &vlr2);
	
	 vlr3 = vlr1 + vlr2;
	 
	printf ("O resultado da soma dos dois valores �: %d \n", vlr3);
	
	vlr3 = vlr1 - vlr2;
	
	printf ("O resultado da subtra��o dos dois valores �: %d \n", vlr3);
	
	vlr3 = vlr1 * vlr2;
	
	printf ("O resultado da multiplica��o dos dois valores �: %d \n", vlr3);
}

