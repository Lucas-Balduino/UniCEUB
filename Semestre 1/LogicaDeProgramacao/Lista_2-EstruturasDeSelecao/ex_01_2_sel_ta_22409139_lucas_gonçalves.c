#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 1 lista

void main (void)
{
	setlocale (LC_ALL, "Portuguese");
	
	int ano, idade;
	
	printf ("Digite o ano que você nasceu: ");
	scanf ("%d", &ano);
	
	idade = 2024 - ano;
	
	if (idade >= 16)
	{
		printf ("Você tem %d anos e já pode votar", idade); //alteração B:  Mostre também a idade da pessoa 
	}
	else
	{
		printf ("Você tem %d anos e não pode votar", idade); //alteração B:  Mostre também a idade da pessoa 
	}
	
	//alteração A: Na tela de saída, mostre também a data de nascimento. 
	printf ("\nVocê nasceu em %d", ano);
	
}
