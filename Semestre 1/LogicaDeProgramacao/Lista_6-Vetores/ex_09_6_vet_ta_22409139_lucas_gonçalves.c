#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 9

/*. Elabore um programa que, dados dois vetores inteiros de 20 posições, efetue as
respectivas operações indicadas por um outro vetor de 20 posições de caracteres
também fornecido pelo usuário, contendo as quatro operações aritméticas em
qualquer combinação, armazenando os resultados num quarto vetor.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int i, j;
	int valores1 [20];
	int valores2 [20];
	char operadores [20];
	float resultados [20];

	printf("Digite 20 valores\n");
	for (i = 0; i < 20; i++){
		scanf("%d", &valores1[i]);
	}

	printf("Digite mais 20 valores\n");
	for (i = 0; i < 20; i++){
		scanf("%d", &valores2[i]);
	}

	printf("Digite 20 operadores aritmeticos\n");
	for (i = 0; i < 20; i++){
		scanf(" %c", &operadores[i]);
	}

	for (i = 0; i < 20; i++){
		if (operadores[i] == '+'){
			resultados[i] = (float)valores1[i] + (float)valores2[i];
		}
		if (operadores[i] == '-'){
			resultados[i] = (float)valores1[i] - (float)valores2[i];
		}
		if (operadores[i] == '/'){
			resultados[i] = (float)valores1[i] / (float)valores2[i];
		}
		if (operadores[i] == '*'){
			resultados[i] = (float)valores1[i] * (float)valores2[i];
		}

	}

	for (i = 0; i < 20; i++){
		printf("%d %c %d = %.2f\n",valores1[i], operadores[i], valores2[i], resultados[i]);
	}
}
