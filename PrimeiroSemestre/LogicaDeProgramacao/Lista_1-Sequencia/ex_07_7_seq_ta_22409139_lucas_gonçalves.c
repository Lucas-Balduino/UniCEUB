#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exercício 7 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float raio = 0;
	float circunf = 0;
	
	printf ("Insira o valor do raio do círculo: \n");
	scanf ("%f", &raio);
	
	circunf = (2 * 3.141516 * raio);
	 
	printf ("O valor da circunferência é: %f \n", circunf);
}
