#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 5 lista 

void main (void)
{
	setlocale (LC_ALL, "Portuguese");

int x;

printf ("Digite um valor: ");
scanf ("%d", &x);

if (x % 2 == 0)
{
	printf ("%d é par", x);
}

if (x % 2 != 0)
{
	printf ("%d é impar", x);
}

}
