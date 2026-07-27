#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

void main(){
	setlocale(LC_ALL,"Portuguese");
	char string[40];
	int i, contador = 0, caracter;
	
	printf("Digite um nome:\n");
	for (i = 0; i < 40; i++){
		string[i] = getche();
		if (string[i] == 13){
			break;
		}
	}
	printf("\n");
	
	printf("Digite o caracter que deseja encontrar:\n");
	scanf("%c", &caracter);
	
	printf("O caracter %c foi digitado nos indices:\n");
	for (i = 0; i < 40; i++){
		if(string[i] == caracter){
			printf("%d\n", i);
			contador++;
		}
		if (string[i] == 13){
			break;
		}
	}
	
	if(contador == 0){
		printf("O caracter %c não foi encontrado (-1)", caracter);
	}
}
