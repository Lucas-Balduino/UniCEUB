#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 2

/*Sabendo que a fórmula de conversão de graus Fahrenheit para Celsius é:
C = ( 5 / 9 ) * ( f – 32 ), escreva um programa que converta de Fahrenheit para Celsius
e exiba na tela os 20 (vinte) primeiros valores a partir da temperatura de 32° F ,
devendo exibir as duas unidades de conversão. programa deverá exibir o seguinte
cabeçalho*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	int i = 0;
	float tempFahrenheit = 32, tempCelcius;
	
	printf("CONVERSAO FAHREINHEIT – CELSIUS\n");
	printf("CELSIUS - FAHREINHEIT\n");
	
	while (i <= 20)
	{
		tempCelcius = (5.0 / 9.0) * (tempFahrenheit - 32);
		i++;
		printf("%.2f - %.2f\n", tempCelcius, tempFahrenheit);
		tempFahrenheit += 1;	
	}
}
