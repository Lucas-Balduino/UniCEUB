#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//exerc�cio 4 lista

void main(void)
{
	setlocale(LC_ALL, "Portuguese");
		
	float n1 = 0;
	float n2 = 0;
	float media = 0;

	printf("Digite as suas 2 notas: \n");
	scanf("%f%f", &n1, &n2);
	
	media = (n1 + n2) / 2;
	
	printf("\n A m�dia final �:%.2f \n", media);
}
