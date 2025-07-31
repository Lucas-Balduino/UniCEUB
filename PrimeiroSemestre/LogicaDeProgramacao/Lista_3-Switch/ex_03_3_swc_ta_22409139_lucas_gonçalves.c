#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 3

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	
	printf("Insira o codigo do produto desejado\n");
	printf("100 - Detergente\n");
	printf("101- Esponja\n");
	printf("102- Lã de aço\n");
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
		printf("Lã de aço");
		break;
	default:
		printf("Nenhuma das opções escolhidas");
	}
}
