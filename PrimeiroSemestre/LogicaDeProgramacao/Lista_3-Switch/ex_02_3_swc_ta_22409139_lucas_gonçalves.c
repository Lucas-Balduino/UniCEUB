#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 2

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	
	printf("Escolha uma das op��es abaixo\n");
	printf("1-Fazer Check-in\n");
	printf("2-Chamar servi�o de quarto\n");
	printf("3-Fazer pedido\n");
	scanf("%d",&x);
	
	switch(x)
	{
	case 1:
		printf("Op��o 1 escolhida: Fazer Check-in");
		break;
	case 2:
		printf("Op��o 2 escolhida: Chamar servi�o de quarto");
		break;
	case 3:
		printf("Op��o 3 escolhida: Fazer pedido");
		break;
	default:
		printf("Nenhuma das op��es escolhidas")
	}
}
