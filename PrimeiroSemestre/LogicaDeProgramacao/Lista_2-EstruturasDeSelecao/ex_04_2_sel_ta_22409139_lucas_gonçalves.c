#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 4 lista

void main (void)
{
	setlocale (LC_ALL, "Portuguese");
	
	float altura;
	float peso;
	char genero;
	
	printf ("Digite seu gênero (m ou f): \n"); //alt b: Troque a entrada para ‘m’ ou ‘f’
	scanf ("%c", &genero);
	
	printf ("Digite sua altura (em metros): \n");
	scanf ("%f", &altura);
	
	if (genero == 'm')
	{
		peso = ((72.7 * altura) - 58);
		printf ("Seu peso ideal é %.2f", peso); //alt a: Mostre o peso com duas casas decimais.
	}
	
	if (genero == 'f')
	{
		peso = ((62.1 * altura) - 44.7);
		printf ("Seu peso ideal é %.2f", peso); //alt a: Mostre o peso com duas casas decimais.
	}
	
	if (genero != 'm' && genero != 'f')
	{
		printf ("ERRO: Seu gênero deve ser m ou f"); //alt c: Mostre uma mensagem de erro se ele digitar valor de gênero diferente de ‘m’ ou ‘f.
	}
}
