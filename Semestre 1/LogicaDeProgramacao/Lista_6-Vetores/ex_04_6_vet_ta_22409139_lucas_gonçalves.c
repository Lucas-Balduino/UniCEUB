 #include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercício 4

/*Refaça o programa anterior para mostrar também a quantidade de notas acima da
média da turma.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	float alunos [10] = {0};
	float media = 0; 
	float nota[100];
	int i, contador = 0;
	
	for ( i = 0; i < 10; i++){
		printf("Digite a nota do aluno %d\n", i);
		scanf("%f", &alunos[i]);
		
		if (alunos[i] >= 5){
			contador++;
		}
	
		media += alunos[i];
	}
	
	media /= 10;
	
	for (i = 0; i < 10; i++){
		printf("O aluno %d tirou a nota %.2f\n", i, alunos[i]);
	}
	
	printf("A media da tuma foi: %.2f\n", media);
	printf("A quantidade de notas acima da media foi: %d", contador);
}
