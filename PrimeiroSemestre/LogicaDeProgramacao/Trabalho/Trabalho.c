#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

void main (){
   setlocale (LC_ALL,"Portuguese");
   float notaProva1 [20];
   float notaProva2 [20];   
   float mediaProvas [20] = {0}; // Initialize to 0
   int i = 0; // Initialize i

    printf("Digite a nota dos alunos da primeira prova: \n");
    printf("Digite -1 para parar de digitar\n");
    while (1) 
    {
        printf("Digite a nota do Aluno %d \n", i+1);
        scanf("%f", &notaProva1[i]);
        if (notaProva1[i] == -1) 
            break;
        i++;
    }

	notaProva1 [i-1] = 0;
	
    i = 0; // Reset i for second loop

    printf("Digite a nota dos alunos da segunda prova: \n");
    while (1) // Infinite loop
    {
        printf("Digite a nota do Aluno %d \n", i+1);
        scanf("%f", &notaProva2[i]);
        if (notaProva1[i] == 0)
            break;
        i++;
    }

    for (i = 0; i < 20; i++) 
    {
        mediaProvas[i] = ((notaProva1[i] + notaProva2[i]) / 2);
    }

    printf("			Centro Universitário de Brasília \n");
    printf("			Relatório de Desempenho da Turma A\n");
    for (i = 0; i < 20; i++)
    {
        if (notaProva1[i] == -1) // Stop if either grade is -1
            break;
        printf("O Aluno %d teve as seguintes notas: P1 = %.2f, P2 = %.2f e a Média final = %.2f\n", i+1, notaProva1[i], notaProva2[i], mediaProvas[i]);
    }
}

