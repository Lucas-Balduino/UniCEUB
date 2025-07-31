#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exercício 8 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float raio = 0;
	float altura = 0;
	float arlat = 0;
	
	printf ("Insira o valor do raio da base: \n");
	scanf ("%f", &raio);
	
	printf ("Insira o valor da altura do cilíndro: \n");
	scanf ("%f", &altura);
	
	arlat = (2 * 3.141516 * raio * altura);
	 
	printf ("O valor da area lateral do cilindro é: %f \n", arlat);
}
