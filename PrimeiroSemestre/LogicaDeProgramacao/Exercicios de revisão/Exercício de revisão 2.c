#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exerc�cio 2

/*Fa�a um programa que a partir da entrada da nota de um aluno, ele mostre qual a 
men��o que esse aluno tirou. A nota -1 indica que o aluno n�o fez a prova. Ao final 
mostre a nota e a respectiva men��o*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	float nota;
	
	printf("Digite a sua nota para descobrir sua men��o(-1 se nao fez a prova)\n");
	scanf("%f",&nota);

	if (nota == -1)
	{
		printf("Sua men��o � SR");
	}
	if (nota <= 2.4 && nota >= 0)
	{
		printf("Sua men��o � II");
	}
	if (nota <= 4.99 && nota >= 2.5)
	{
		printf("Sua men��o � MI");
	}
	if (nota <= 6.99 && nota >= 5)
	{
		printf("Sua men��o � MM");
	}
	if (nota <= 8.99 && nota >= 7)
	{
		printf("Sua men��o � MS");
	}
	if (nota <= 10 && nota >= 9)
	{
		printf("Sua men��o � SS");
	}
	
}
