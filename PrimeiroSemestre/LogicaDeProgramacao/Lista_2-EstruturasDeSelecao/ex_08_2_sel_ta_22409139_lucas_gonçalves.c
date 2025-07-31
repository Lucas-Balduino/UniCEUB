#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exercício 8 lista

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
		
	float n1, n2, media, p1, p2;

	printf("Digite a nota da primeira prova: \n");
	scanf("%f", &n1);
	
	printf("Digite o peso da primeira prova: \n");
	scanf("%f", &p1);
	
	printf("Digite a nota da segunda prova: \n");
	scanf("%f", &n2);
	
	printf("Digite o peso da segunda prova: \n");
	scanf("%f", &p2);
	
	// alt c: media = (n1 * 3 + n2 * 5) / 8;
	
	media = (n1 * p1 + n2 * p2) / (p1 + p2);
	
	if (media >= 5)
	{
		printf ("Aluno aprovado! Média %.2f", media); //alt a: Mostre o valor da média aritmética com duas casas decimais
	}
	
	else
	{
		printf ("Aluno reprovado! Média %.2f", media);//alt a: Mostre o valor da média aritmética com duas casas decimais
	}
	
}
