#include <stdio.h>+-
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 7 lista

void main (void)
{
	setlocale (LC_ALL, "Portuguese");

	int x,y,z,a,b,c;
	printf ("Defina sua senha: ");
	
	x = getche();
	y = getche();
	z = getche();
	
	
	printf ("\nDigite sua senha: ");
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
	
	a = getch();
	b = getch();
	c = getch();
	
	/*if (x == 49 && y == 50 && z == 51)
	{
		printf("\nAcesso liberado");
	}
	else
	{
		printf("\nSenha incorreta");
	}
	*/
	
	while (x != a || y != b || z != c)
	{
		
		printf("\nSenha incorreta");
		printf ("\nDigite sua senha: ");
	
		a = getch();
		b = getch();
		c = getch();
	}
	
		if (x == a && y == b && z == c)
	{
		printf("\nAcesso liberado");
	}
}
