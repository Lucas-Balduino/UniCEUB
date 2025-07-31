#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 11

/*Elabore um programa para limitar a quantidade máxima de caracteres que poderemos
digitar para uma entrada alfanumérica, ou seja, variável string. O usuário fornecerá
uma palavra ou uma sentença que será finalizada quando ele digitar a tecla < enter >
ou quando chegar ao limite máximo de sessenta caracteres digitados. No final mostre
a quantidade de caracteres efetivamente digitados.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int i;
	char palavra[60];

	printf("Digite frase de ate 60 caracteres\n");

	for (i = 0; i < 60; i++){
        palavra[i] = getche();
        if (palavra[i] == 13){
            printf("Quantidade de caracteres digitados: %d", i);
            break;
        }
        if (i == 60){
            printf("Limite de caracteres atingido!");
            printf("60 caracteres digitados");
        }
	}
}

