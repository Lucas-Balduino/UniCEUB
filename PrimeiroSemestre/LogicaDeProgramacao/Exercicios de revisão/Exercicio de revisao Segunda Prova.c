#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*Faça um programa que receba em matrizes distintas as seguintes informações de uma
turma de até 10 alunos:
1) Duas notas de cada aluno
2) O nome de cada aluno com até 10 caracteres
3) Em um vetor armazene a média de cada aluno.
A partir das notas recebidas você deverá calcular a média aritmética das notas de cada
aluno e armazená-las em um vetor.
Para encerrar antes do preenchimento total da quantidade máxima de alunos, digite nota
-1 na P1. */

void main(){
    setlocale(LC_ALL, "Portuguese");
    float matrizNotas[10][2];
    char matrizNomes[10][10];
    float mediaNotas [10];
    int contador = 0, i,j;

    for (i = 0; i < 10; i++){
        printf("Digite as duas notas do aluno\n");
        printf("(Digite a nota -1 para encerrar o programa)\n");

        for (j = 0; j < 2; j++){
            scanf("%f", &matrizNotas[i][j]);
            mediaNotas[i] += matrizNotas[i][j];

            if (matrizNotas[i][j] == -1){
                contador = 1;
                break;
            }
        }
        mediaNotas[i] /= 2;

        if (contador == 1){
            break;
        }
                
        printf("Digite o nome do aluno\n");

        for (j = 0; j < 10; j++){
            matrizNomes[i][j] = getche();
            if (matrizNomes[i][j] == 13){
                break;
            }
        }
        printf("\n");
    }

    printf("            Centro Universitário de Brasília\n");
    printf("           Relatório de Desempenho da Turma A\n");

    for (i = 0; i < 10; i++){
        if (matrizNotas[i][0] == -1){
            break;
        }

        for (j = 0; j < 10; j++){
            if (matrizNomes[i][j] == 13){
                break;
            }
            printf("%c", matrizNomes[i][j]);
            
        }

        printf(" teve as seguintes notas: P1 = %.2f, P2 = %.2f, e Media final = %.2f\n", matrizNotas[i][0],matrizNotas[i][1],mediaNotas[i]);
        
    }
    
    
}