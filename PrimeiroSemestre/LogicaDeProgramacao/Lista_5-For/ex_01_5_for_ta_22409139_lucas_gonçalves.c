#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Elaborar um programa C para computar a média de N números reais. Você receberá 
um número inteiro e irá realizar a somo dele com todos os seus antecessores até 
chegar a zero.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	float numero = 0,i = 0, quantidade = 0;
	
	printf("Insira um número: \n");
	scanf("%f", &numero);
	
	quantidade = numero;
	
	for (i = numero; i >= 0; i--)
	{
		numero += i;
	}
	
	numero /= quantidade;
	
	printf("%.2f", numero);
}
