#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 4

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int w,x,y,z;
	
	printf("Escolha um opera��o matematica\n");
	printf("1-Soma\n");
	printf("2-Subtra��o\n");
	printf("3-Multiplica��o\n");
	printf("4-Divis�o\n");
	scanf("%d",&x);
	
	
	printf("Insira os operandos\n");
	scanf("%d\n%d",&y,&z);
	
	switch(x)
	{
	case 1:
		w = y + z;
		printf("O resultado da soma dos dois valores � %d\n",w);
		break;
	case 2:
		w = y - z;
		printf("O resultado da subtr��o dos dois valores � %d\n",w);
		break;
	case 3:
		w = y * z;
		printf("O resultado da multiplica��o dos dois valores � %d\n",w);
		break;
	case 4:
		w = y / z;
		printf("O resultado da divis�o dos dois valores � %d\n",w);
		break;
	default:
		printf("Nenhuma das op��es escolhidas");
	}
}
