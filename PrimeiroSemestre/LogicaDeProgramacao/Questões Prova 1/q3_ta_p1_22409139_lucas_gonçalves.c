#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int i, numero, taboada;
	
	printf("Digite um valor que deseja saber a taboada:\n");
	scanf("%d", &numero);
	
	printf("A taboada do %d é", numero);
	for (i = 0; i <= 10; i++)
	{
		taboada = numero * i;
		printf("%d x %d = %d\n",numero , i, taboada);
	}
}
