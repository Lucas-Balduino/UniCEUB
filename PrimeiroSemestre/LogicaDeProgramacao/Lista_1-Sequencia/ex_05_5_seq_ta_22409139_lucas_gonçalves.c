#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exerc�cio 5 lista

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
		
	float tempfah= 0;
	float tempcels = 0;

	printf("Insira o valor da temperatura em Fahrenheit: \n");
	scanf("%f", &tempfah);
	
	tempcels = (tempfah - 32) / 1.8;
	
	printf("\n Essa temperatura em Celcius �: %.2f \n", tempcels);
}
