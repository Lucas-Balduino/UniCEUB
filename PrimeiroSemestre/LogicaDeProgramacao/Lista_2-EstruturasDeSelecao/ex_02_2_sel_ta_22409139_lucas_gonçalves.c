#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

//exercicio 2 lista

void main (void)
{
	setlocale (LC_ALL, "Portuguese");

float x,y;

printf ("Digite dois valores inteiros: \n");
scanf ("%f\n%f", &x, &y);

if (x > y)
{
	printf ("O maior valor é %.2f\n", x);
	printf ("%.2f; %.2f",x,y); //alt a: Se eles forem diferentes, mostre os valores digitados na ordem decrescente.
}
if (x < y)
{
	printf ("O maior valor é %.2f\n", y);
	printf ("%.2f; %.2f",y,x);//alt a: Se eles forem diferentes, mostre os valores digitados na ordem decrescente.
}
if (x == y)
{
	printf ("Os valores são iguais (%.2f)", x);//alt b: Se eles forem iguais, mostre a mensagem e o valor digitado.
}
}
