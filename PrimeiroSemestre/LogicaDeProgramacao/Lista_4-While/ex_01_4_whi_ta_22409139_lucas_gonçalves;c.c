#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 1

//Elaborar um programa C para computar a m�dia de N n�meros reais

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float soma,quantidade,media;
	float numero = 1;
		
	printf("Insira numeros para obter uma m�dia:(Insira 0 para parar de inserir)\n");
	
	while (numero != 0)
	{
		scanf("%f", &numero);
		if (numero == 0)
		{
			break;
		}
		quantidade++;
		soma += numero;
	}
	
	if (quantidade != 0)
	{
		media = soma / quantidade;
		printf("A media dos numeros inseridos � %f", media);
	}
	else
	{
		printf("Nenhum numero inserido");
	}
}
