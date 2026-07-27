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
	printf ("%.2f é positivo\n", x); //alt a: Além da mensagem, mostre também o número digitado pelo usuário.
	x2 = x * 2;
	printf ("O dobro de %.2f e %2.f", x, x2); //alt b: Se o número for positivo, mostre a mensagem, o valor da variável e o dobro de seu valor;
}
if (x < 0)
{
	printf ("%.2f é negativo", x); //alt a: Além da mensagem, mostre também o número digitado pelo usuário.
	x3 = x * 3;
	printf ("O triplo de %.2f é %2.f", x, x3); //alt b: Se negativo, mostre a mensagem, o valor da variável e o seu triplo de seu valor;
}
if (x == 0)
{
	printf ("%.2f é nulo", x); //alt a: Além da mensagem, mostre também o número digitado pelo usuário. alt b: Se nulo, mostre a mensagem, o valor da variável número.
}
}
