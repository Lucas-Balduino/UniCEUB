#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 6

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	
	printf("Insira o codigo do produto\n");
	scanf("%d",&x);
	
	printf("Esse produto � ");
	switch(x)
	{
	case 1:
		printf("um alimento n�o perec�vel");
		break;
	case 2:
		printf("um alimento perec�vel");
		break;
	case 3:
		printf("vestu�rio");
		break;
	case 4:
		printf("de limpeza");
		break;
	default:
		printf("Nenhuma das op��es escolhidas");
	}
}
