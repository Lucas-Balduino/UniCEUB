#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exercício 3 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float base = 0;
	float altura = 0;
	float area = 0;
	
	printf ("Insira o valor da base: \n");
	scanf ("%f", &base);
	
	printf ("Insira o valor da altura: \n");
	scanf ("%f", &altura);
	
	area = (base*altura)/2;
	 
	printf ("O valor da área do triangulo é: %f \n", area);

}
