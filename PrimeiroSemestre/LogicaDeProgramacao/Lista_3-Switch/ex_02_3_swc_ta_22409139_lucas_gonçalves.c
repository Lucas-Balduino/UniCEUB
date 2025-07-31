#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 2

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	
	printf("Escolha uma das opções abaixo\n");
	printf("1-Fazer Check-in\n");
	printf("2-Chamar serviço de quarto\n");
	printf("3-Fazer pedido\n");
	scanf("%d",&x);
	
	switch(x)
	{
	case 1:
		printf("Opção 1 escolhida: Fazer Check-in");
		break;
	case 2:
		printf("Opção 2 escolhida: Chamar serviço de quarto");
		break;
	case 3:
		printf("Opção 3 escolhida: Fazer pedido");
		break;
	default:
		printf("Nenhuma das opções escolhidas")
	}
}
