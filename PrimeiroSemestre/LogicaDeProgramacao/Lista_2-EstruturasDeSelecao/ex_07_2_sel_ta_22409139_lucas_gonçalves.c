#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 7 lista

void main (void)
{
	setlocale (LC_ALL, "Portuguese");

	int x,y,z;
	
	printf ("Digite sua senha: ");
	/*scanf ("%d",&x); - com scanf aperece ao digitar
	
	 if (x == 123)
	{
		printf("Acesso liberado");
	}
	
	if (x != 123)
	{
		printf("Senha incorreta");
	}
	*/
	
	x = getch();
	y = getch();
	z = getch();
	
	if (x == 49 && y == 50 && z == 51)
	{
		printf("\nAcesso liberado");
	}
	else
	{
		printf("\nSenha incorreta");
	}
}
