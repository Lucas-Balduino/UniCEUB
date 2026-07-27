#include <stdio.h>
#include <conio.h>
#include <locale.h>

void main()
{
	setlocale (LC_ALL, "Portuguese");
	
	char x;
	
	printf ("1. Inclusão \n");
	printf ("2. Alteração \n");
	printf ("3. Exclusão \n");
	printf ("Digite sua opção: ");
	
	x = getchar();
	
	switch (x)
	{
		case '1':
			printf ("Escolheu Inclusão \n");
			break;
		
		case '2':
			printf ("Escolheu Alteração \n");
			break;
			
		case '3':
			printf ("Escolheu Exclusão \n");
			break;
		
		default:
			printf ("Opção Invalida \n");
	}
}
