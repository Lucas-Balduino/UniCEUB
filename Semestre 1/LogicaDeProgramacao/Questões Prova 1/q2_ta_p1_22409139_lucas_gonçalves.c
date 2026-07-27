#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale (LC_ALL, "Portuguese");
	int lado1, lado2, lado3;
	
	printf("Digite o valor do lado 1:\n");
	scanf("%d", &lado1);
	
	printf("Digite o valor do lado 2:\n");
	scanf("%d", &lado2);
	
	printf("Digite o valor do lado 3:\n");
	scanf("%d", &lado3);
	
	if (lado1 == lado2 && lado1 == lado3)
	{
		printf("Esse triângulo é Equilátero");	
	}
	
	if (lado1 == lado2 && lado1 != lado3)
	{
		printf("Esse triângulo é Isósceles");	
	}
	
	if (lado1 == lado3 && lado1 != lado2)
	{
		printf("Esse triângulo é Isósceles");	
	}
	
	if (lado2 == lado3 && lado2 != lado1)
	{
		printf("Esse triângulo é Isósceles");	
	}
	
	if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
	{
		printf("Esse triângulo é Escaleno");	
	}
}
