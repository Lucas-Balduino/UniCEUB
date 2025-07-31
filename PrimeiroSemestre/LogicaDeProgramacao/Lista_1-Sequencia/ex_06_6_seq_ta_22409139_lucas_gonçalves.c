#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exercício 6 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float raio = 0;
	float area = 0;
	
	printf ("Insira o valor do raio do círculo: \n");
	scanf ("%f", &raio);
	
	area = (3.141516 * raio*raio);
	 
	printf ("O valor da área do círculo é: %f \n", area);

}
