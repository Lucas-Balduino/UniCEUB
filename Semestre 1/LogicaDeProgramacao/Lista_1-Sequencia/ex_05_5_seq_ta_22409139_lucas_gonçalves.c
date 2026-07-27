#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exercício 5 lista

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
		
	float tempfah= 0;
	float tempcels = 0;

	printf("Insira o valor da temperatura em Fahrenheit: \n");
	scanf("%f", &tempfah);
	
	tempcels = (tempfah - 32) / 1.8;
	
	printf("\n Essa temperatura em Celcius é: %.2f \n", tempcels);
}
