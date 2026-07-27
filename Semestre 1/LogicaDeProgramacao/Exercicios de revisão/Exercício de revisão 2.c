#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 2

/*Faça um programa que a partir da entrada da nota de um aluno, ele mostre qual a 
menção que esse aluno tirou. A nota -1 indica que o aluno não fez a prova. Ao final 
mostre a nota e a respectiva menção*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	float nota;
	
	printf("Digite a sua nota para descobrir sua menção(-1 se nao fez a prova)\n");
	scanf("%f",&nota);

	if (nota == -1)
	{
		printf("Sua menção é SR");
	}
	if (nota <= 2.4 && nota >= 0)
	{
		printf("Sua menção é II");
	}
	if (nota <= 4.99 && nota >= 2.5)
	{
		printf("Sua menção é MI");
	}
	if (nota <= 6.99 && nota >= 5)
	{
		printf("Sua menção é MM");
	}
	if (nota <= 8.99 && nota >= 7)
	{
		printf("Sua menção é MS");
	}
	if (nota <= 10 && nota >= 9)
	{
		printf("Sua menção é SS");
	}
	
}
