#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 6

/*Construa um programa que imprime a soma de todos os valores positivos
digitados pelo usu�rio at� que ele digite um n�mero negativo.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero, soma;
	printf("Digite um sequencia de numeros \n(utilize um numero negativo como sa�da)\n");
	do 
	{
		scanf("%d",&numero);
		if (numero > 0)
		{
			soma+=numero;
		}
	}
	while (numero > 0);
	printf("A soma dos numeros digitados � %d", soma);
}
