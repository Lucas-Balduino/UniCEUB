#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 3 lista

void main (void)
{
	setlocale (LC_ALL, "Portuguese");

float x, x2, x3;

printf ("Digite um valor: ");
scanf ("%f", &x);

if (x > 0)
{
	printf ("%.2f � positivo\n", x); //alt a: Al�m da mensagem, mostre tamb�m o n�mero digitado pelo usu�rio.
	x2 = x * 2;
	printf ("O dobro de %.2f e %2.f", x, x2); //alt b: Se o n�mero for positivo, mostre a mensagem, o valor da vari�vel e o dobro de seu valor;
}
if (x < 0)
{
	printf ("%.2f � negativo", x); //alt a: Al�m da mensagem, mostre tamb�m o n�mero digitado pelo usu�rio.
	x3 = x * 3;
	printf ("O triplo de %.2f � %2.f", x, x3); //alt b: Se negativo, mostre a mensagem, o valor da vari�vel e o seu triplo de seu valor;
}
if (x == 0)
{
	printf ("%.2f � nulo", x); //alt a: Al�m da mensagem, mostre tamb�m o n�mero digitado pelo usu�rio. alt b: Se nulo, mostre a mensagem, o valor da vari�vel n�mero.
}
}
