#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Faça um programa que mostre na tela os 20 primeiros números pares divisíveis 
por 6, apresente eles nos formatos decimal, octal e hexadecimal.
*/

void main()
{
	setlocale(LC_ALL,"Portuguese");
	int i, numero, contador, numeroOctal, numeroHexa;
	while (contador < 20)
	{
		if (numero % 6 == 0 && numero != 0)
		{
			printf("Em decimal:%d, em Octal: %o e em Hexadecimal: %x\n", numero, numero, numero);
			contador++;
		}
		numero++;
	}
}
