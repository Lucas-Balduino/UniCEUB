#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 3

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	
	printf("Insira o codigo do produto desejado\n");
	printf("100 - Detergente\n");
	printf("101- Esponja\n");
	printf("102- L� de a�o\n");
	scanf("%d",&x);
	
	printf("Produto escolhido: \n");
	switch(x)
	{
	case 100:
		printf("Detergente\n");
		break;
	case 101:
		printf("Esponja");
		break;
	case 102:
		printf("L� de a�o");
		break;
	default:
		printf("Nenhuma das op��es escolhidas");
	}
}
