#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 1

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	
	printf("Insira um numero correspondente a um dia da semana, Domingo - 1, Sabado - 7 \n");
	scanf("%d",&x);
	
	switch (x)
	{
		case 1:
			printf("Domingo não é dia util");
			break;
		case 2:
			printf("Segunda é dia util");
			break;
		case 3:
			printf("Terça é dia util");
			break;
		case 4:
			printf("Quarta é dia util");
			break;
		case 5:
			printf("Quinta é dia util");
			break;
		case 6:
			printf("Sexta é dia util");
			break;
		case 7:
			printf("Sabado não é dia util");
		default:
			printf("Nenhuma das opções escolhidas") 
	}
	
}
