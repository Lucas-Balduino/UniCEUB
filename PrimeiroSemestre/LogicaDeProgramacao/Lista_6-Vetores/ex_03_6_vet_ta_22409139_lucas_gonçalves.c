#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercício 3

/*Construa um programa que calcule a média aritmética de uma classe com dez alunos,
onde cada aluno teve uma avaliação (use vetor). Gere um relatório, tela de saída, com
o número e a nota dos alunos e no final mostre também a média da turma. */

void main(){
	setlocale (LC_ALL,"Portuguese");
	float alunos [10] = {0};
	float media = 0;
	float nota[100];
	int i;
	
	for ( i = 0; i < 10; i++){
		printf("Digite a nota do aluno %d\n", i);
		scanf("%f", &alunos[i]);
		
		media += alunos[i];
	}
	
	media /= 10;
	
	for (i = 0; i < 10; i++){
		printf("O aluno %d tirou a nota %.2f\n", i, alunos[i]);
	}
	
	printf("A media da tuma foi: %.2f", media);
}
