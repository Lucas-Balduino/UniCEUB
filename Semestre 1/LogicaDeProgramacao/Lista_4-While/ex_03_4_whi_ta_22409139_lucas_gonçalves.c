#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Execício 3

/*Sabendo que a fórmula de conversão de graus Fahrenheit para Celsius é:
C = ( 5 / 9 ) * ( f – 32 ), escreva um programa que converta de Fahrenheit para Celsius
exiba na tela as temperaturas compreendidas em um intervalo a ser fornecido pelo
usuário. O usuário deverá fornecer o valor inicial e o valor final. O programa então
exibirá as temperaturas compreendidas no intervalo, devendo exibir as duas
unidades de conversão. programa deverá exibir o seguinte cabeçalho. O programa
deverá exibir o seguinte cabeçalho.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	float tempFahrenheit, tempCelcius,final,inicial;
	
	printf("Digite um intervalo de temperaturas em Fahrenheit (Valor inicial e final)\n:");
	scanf("%f%f",&tempFahrenheit,&final);
	
	inicial = tempFahrenheit;
	
	printf("CONVERSAO FAHREINHEIT – CELSIUS\n");
	printf("CELSIUS - FAHREINHEIT\n");
	
	while (inicial <= final)
	{
		tempCelcius = (5.0 / 9.0) * (tempFahrenheit - 32);
		inicial++;
		printf("%.2f - %.2f\n", tempCelcius, tempFahrenheit);
		tempFahrenheit += 1;	
	}
}
