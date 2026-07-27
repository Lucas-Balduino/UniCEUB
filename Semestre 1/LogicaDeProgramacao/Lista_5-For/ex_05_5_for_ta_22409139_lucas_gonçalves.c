#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//Exercício 5

/*Sabendo que a 01 pé equivale a 0.3048m, faça um programa que mostre na tela a
conversão de metros para pés, de 0 a 100metros. Seu programa deverá exibir o
cabeçalho abaixo e a cada 20 valores exibidos na tela, seu programa deverá solicitar
ao usuário que digite a tecla ENTER pra continuar, após isso deverá ser limpa a tela ,
exibido o cabeçalho e continuar o processamento até o final do programa.*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	float metros, pes;
	int continuar;
	
	printf("		Conversão Metros - Pés\n");
	printf("Metros						Pés\n");
	
	for (metros = 0; metros <= 100; metros++)
	{
		pes = 3.28084 * metros;
		if ((int)metros % 25 == 0)
		{
			printf("%.2f						%.2f\n", metros, pes);
			printf("Precione ENTER para continuar\n");
			continuar = getche();
			while (continuar != 13)
			{
				printf("\nOutra tecla foi precionada, tente novamente\n:");
				continuar = getche();
			}
			system("cls");	
		}
		printf("%.2f						%.2f\n", metros, pes);
	}

}
