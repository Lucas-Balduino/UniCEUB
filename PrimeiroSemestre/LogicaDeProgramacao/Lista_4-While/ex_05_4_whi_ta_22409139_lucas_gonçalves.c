#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 5

/*Desenvolva um programa que leia v�rios n�meros digitados pelo usu�rio e use o
valor -1 como condi��o (flag) de sa�da da estrutura de repeti��o. Na tela de sa�da,
mostre a quantidade de n�meros digitados.
*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero,quantidade, soma;
	printf("Digite um sequencia de numeros \n(utilize -1 como sa�da)\n");
	
	while (numero != -1)
	{
		scanf("%d", &numero);
		quantidade++;
		soma+=numero;
	}
	quantidade -= 1;
	printf("Voce digitou %d numeros e a soma deles � %d", quantidade, soma);
}
