#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main()
{
	setlocale (LC_ALL, "Portuguese");
	
	char x;
	
	printf ("1. Inclus�o \n");
	printf ("2. Altera��o \n");
	printf ("3. Exclus�o \n");
	printf ("Digite sua op��o: ");
	
	x = getchar();
	
	switch (x)
	{
		case '1':
			printf ("Escolheu Inclus�o \n");
			break;
		
		case '2':
			printf ("Escolheu Altera��o \n");
			break;
			
		case '3':
			printf ("Escolheu Exclus�o \n");
			break;
		
		default:
			printf ("Op��o Invalida \n");
	}
}
