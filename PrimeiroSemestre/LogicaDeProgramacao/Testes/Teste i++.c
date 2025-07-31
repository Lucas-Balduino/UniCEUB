#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	int a,b;
	b = 10;
	a = b++;
	
	printf("Valor de a: %d\nValor de b: %d",a,b);	
}
