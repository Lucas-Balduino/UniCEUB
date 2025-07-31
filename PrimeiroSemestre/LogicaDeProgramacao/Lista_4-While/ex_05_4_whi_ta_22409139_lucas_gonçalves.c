#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 5

/*Desenvolva um programa que leia vários números digitados pelo usuário e use o
valor -1 como condição (flag) de saída da estrutura de repetição. Na tela de saída,
mostre a quantidade de números digitados.
*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	
	int numero,quantidade, soma;
	printf("Digite um sequencia de numeros \n(utilize -1 como saída)\n");
	
	while (numero != -1)
	{
		scanf("%d", &numero);
		quantidade++;
		soma+=numero;
	}
	quantidade -= 1;
	printf("Voce digitou %d numeros e a soma deles é %d", quantidade, soma);
}
