#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exerc�cio 6 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float raio = 0;
	float area = 0;
	
	printf ("Insira o valor do raio do c�rculo: \n");
	scanf ("%f", &raio);
	
	area = (3.141516 * raio*raio);
	 
	printf ("O valor da �rea do c�rculo �: %f \n", area);

}
