#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 1

//Elaborar um programa C para computar a média de N números reais

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float soma,quantidade,media;
	float numero = 1;
		
	printf("Insira numeros para obter uma média:(Insira 0 para parar de inserir)\n");
	
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
		printf("A media dos numeros inseridos é %f", media);
	}
	else
	{
		printf("Nenhum numero inserido");
	}
}
