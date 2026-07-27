#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*Sabendo que a fórmula de conversão de graus Fahreinheit para Celsius é C = ( 5 / 9 ) * 
( f – 32 ), escreva um programa que converta de Fahreinheit para Celsius. O programa 
deverá imprimir na tela os 50 (cinquenta) primeiros valores positivos e negativos 
devendo exibir as duas unidades de conversão.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float tempFahrenheit, tempCelsius;
	
	printf("		Conversão Fahrenheit - Celsius\n");
	printf("Celsius						Fahrenheit\n");
	
	for (tempFahrenheit = -50.0; tempFahrenheit <= 50.0; tempFahrenheit++)
	{
		tempCelsius = ((5.0 / 9.0) * (tempFahrenheit - 32.0));
		if (tempFahrenheit % 25.0 == 0.0)
		{
			printf("%.2f						%.2f\n", tempCelsius, tempFahrenheit);
			printf("Precione ENTER para continuar");
			system("cls");
			continuar = getche();
			if (continuar != "0x0d")
			{
				break;
			}
		}
		printf("%.2f						%.2f\n", tempCelsius, tempFahrenheit);
		
	}
}
