#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 1

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	
	printf("Insira um numero correspondente a um dia da semana, Domingo - 1, Sabado - 7 \n");
	scanf("%d",&x);
	
	switch (x)
	{
		case 1:
			printf("Domingo n�o � dia util");
			break;
		case 2:
			printf("Segunda � dia util");
			break;
		case 3:
			printf("Ter�a � dia util");
			break;
		case 4:
			printf("Quarta � dia util");
			break;
		case 5:
			printf("Quinta � dia util");
			break;
		case 6:
			printf("Sexta � dia util");
			break;
		case 7:
			printf("Sabado n�o � dia util");
		default:
			printf("Nenhuma das op��es escolhidas") 
	}
	
}
