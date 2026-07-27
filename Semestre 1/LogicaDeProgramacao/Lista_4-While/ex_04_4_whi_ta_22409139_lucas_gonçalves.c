#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exercício 4

/*Faça um programa que calcula a média aritmética de uma turma com cinquenta
alunos, sabendo-se que cada aluno realizou uma avaliação. Para facilitar os testes,
faça com quatro alunos.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	float media;
	float nota, soma;
	int i, alunos;
	
	printf("Digite a quantidade de alunos que ira indicar a nota para a media:\n");
	scanf("%d", &alunos);
	
	while (i <= alunos)
	{
		printf("Digite a nota do aluno %d\n", i);
		scanf("%f", &nota);
		soma += nota;
		i++;
	}
	media = (soma / alunos);
	printf("A media de nota dessa sala foi %.2f\n", media);
}
