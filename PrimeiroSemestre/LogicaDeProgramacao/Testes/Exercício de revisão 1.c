#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Exec�cio 1

/* Fa�a um programa para calcular o volume (m�) de um prisma trapezoidal, onde 
o volume � dado pela seguinte f�rmula:
v = ((b + B) / 2) . h . l 
O usu�rio fornecer� todos os dados necess�rios, ou seja, a base menor, a base 
maior, o comprimento e a altura. A partir dos dados de entrada, calcule o volume. 
Na sa�da apresente o valor do volume com tr�s casas decimais*/

void main ()
{
	setlocale(LC_ALL,"Portuguese");
	float baseMenor = 0.0, baseMaior = 0.0, comprimento = 0.0, altura = 0.0, volume = 0.0;
	
	printf("Insira o valor da base menor do prisma\n");
	scanf("%f", &baseMenor);
	
	printf("Insira o valor da base maior do prisma\n");
	scanf("%f", &baseMaior);
	
	printf("Insira o valor do comprimento do prisma\n");
	scanf("%f", &comprimento);
	
	printf("Insira o valor da altura do prisma\n");
	scanf("%f", &altura);
	
	volume = (((baseMenor + baseMaior) / 2) * comprimento * altura);
	
	printf("O volume do prisma trapezoidal � %.3f", volume);
	
}
