#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 1 lista

void main (void)
{
	setlocale (LC_ALL, "Portuguese");
	
	int ano, idade;
	
	printf ("Digite o ano que voc� nasceu: ");
	scanf ("%d", &ano);
	
	idade = 2024 - ano;
	
	if (idade >= 16)
	{
		printf ("Voc� tem %d anos e j� pode votar", idade); //altera��o B:  Mostre tamb�m a idade da pessoa 
	}
	else
	{
		printf ("Voc� tem %d anos e n�o pode votar", idade); //altera��o B:  Mostre tamb�m a idade da pessoa 
	}
	
	//altera��o A: Na tela de sa�da, mostre tamb�m a data de nascimento. 
	printf ("\nVoc� nasceu em %d", ano);
	
}
