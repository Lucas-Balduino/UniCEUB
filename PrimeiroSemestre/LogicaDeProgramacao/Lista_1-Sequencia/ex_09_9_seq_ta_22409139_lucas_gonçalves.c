#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exercício 7 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float raio = 0;
	float vol = 0;
	
	printf ("Insira o valor do raio: \n");
	scanf ("%f", &raio);
	
	vol = (4/3 * 3.141516 * raio * raio *raio);
	 
	printf ("O valor do volume da esfera é: %f \n", vol);
}
