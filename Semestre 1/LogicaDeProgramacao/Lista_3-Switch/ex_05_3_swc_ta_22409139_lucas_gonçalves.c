#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 5

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int x;
	float y,z;
	
	printf("Indique seu sexo\n");
	printf("M - Masculino\n");
	printf("F - Feminino\n");
	scanf("%c",&x);
	
	printf("Indique sua altura\n");
	scanf("%f",&y);
	
	if (y < 3)
	{
		  y = y * 100;
	}
	
	switch(x)
	{
	case 'M':
		z = (52 + (0.75 * (y - 152.4)));
		printf("O seu peso ideal é %.2f\n",z);
		break;
	case 'F':
		z = (52 + (0.67 * (y - 152.4)));
		printf("O seu peso ideal é %.2f\n",z);
		break;
	default:
		printf("Nenhuma das opções escolhidas");
	}
}
