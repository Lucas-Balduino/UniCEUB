#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(void)
{
	
float A1 = 0;
float A2 = 0;
float A3 = 0;
float A4 = 0;
float media = 0;

	setlocale(LC_ALL, "Portuguese");
	printf("Digite as suas 4 notas: \n");
	scanf("%f%f%f%f", &A1, &A2, &A3, &A4);
	
	media = (A1 + A2 + A3 + A4) / 4;
	
	printf("\n A média final é:%.2f \n", media);
	return 0;

}
