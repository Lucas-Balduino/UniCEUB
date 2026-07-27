#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 4

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int w,x,y,z;
	
	printf("Escolha um operação matematica\n");
	printf("1-Soma\n");
	printf("2-Subtração\n");
	printf("3-Multiplicação\n");
	printf("4-Divisão\n");
	scanf("%d",&x);
	
	
	printf("Insira os operandos\n");
	scanf("%d\n%d",&y,&z);
	
	switch(x)
	{
	case 1:
		w = y + z;
		printf("O resultado da soma dos dois valores é %d\n",w);
		break;
	case 2:
		w = y - z;
		printf("O resultado da subtrção dos dois valores é %d\n",w);
		break;
	case 3:
		w = y * z;
		printf("O resultado da multiplicação dos dois valores é %d\n",w);
		break;
	case 4:
		w = y / z;
		printf("O resultado da divisão dos dois valores é %d\n",w);
		break;
	default:
		printf("Nenhuma das opções escolhidas");
	}
}
