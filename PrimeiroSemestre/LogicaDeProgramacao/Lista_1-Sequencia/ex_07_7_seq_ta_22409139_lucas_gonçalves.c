#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exerc�cio 7 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float raio = 0;
	float circunf = 0;
	
	printf ("Insira o valor do raio do c�rculo: \n");
	scanf ("%f", &raio);
	
	circunf = (2 * 3.141516 * raio);
	 
	printf ("O valor da circunfer�ncia �: %f \n", circunf);
}
