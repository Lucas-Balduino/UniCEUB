#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exec�cio 3

/*Sabendo que a f�rmula de convers�o de graus Fahrenheit para Celsius �:
C = ( 5 / 9 ) * ( f � 32 ), escreva um programa que converta de Fahrenheit para Celsius
exiba na tela as temperaturas compreendidas em um intervalo a ser fornecido pelo
usu�rio. O usu�rio dever� fornecer o valor inicial e o valor final. O programa ent�o
exibir� as temperaturas compreendidas no intervalo, devendo exibir as duas
unidades de convers�o. programa dever� exibir o seguinte cabe�alho. O programa
dever� exibir o seguinte cabe�alho.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	float tempFahrenheit, tempCelcius,final,inicial;
	
	printf("Digite um intervalo de temperaturas em Fahrenheit (Valor inicial e final)\n:");
	scanf("%f%f",&tempFahrenheit,&final);
	
	inicial = tempFahrenheit;
	
	printf("CONVERSAO FAHREINHEIT � CELSIUS\n");
	printf("CELSIUS - FAHREINHEIT\n");
	
	while (inicial <= final)
	{
		tempCelcius = (5.0 / 9.0) * (tempFahrenheit - 32);
		inicial++;
		printf("%.2f - %.2f\n", tempCelcius, tempFahrenheit);
		tempFahrenheit += 1;	
	}
}
