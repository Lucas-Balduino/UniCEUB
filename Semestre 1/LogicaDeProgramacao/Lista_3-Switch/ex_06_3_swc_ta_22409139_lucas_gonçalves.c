#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 6

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	
	printf("Insira o codigo do produto\n");
	scanf("%d",&x);
	
	printf("Esse produto é ");
	switch(x)
	{
	case 1:
		printf("um alimento não perecível");
		break;
	case 2:
		printf("um alimento perecível");
		break;
	case 3:
		printf("vestuário");
		break;
	case 4:
		printf("de limpeza");
		break;
	default:
		printf("Nenhuma das opções escolhidas");
	}
}
