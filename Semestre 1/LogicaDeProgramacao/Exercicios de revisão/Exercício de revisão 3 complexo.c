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
	for (numero = 0; numero <= 1000; numero++)
	{
		if (numero % 6 == 0)
		{
			printf("Em decimal:%d",numero);
			while (numero > 0)
			{
				numero / 10;
				contador++;
			}
			printf("Numero na base Octal:\n");
			for (i = 0; i <= contador; i++)
			{
			numeroOctal = numero % 8;
			printf("%d",numeroOctal);
			numero /= 8;
			}
			printf("Numero na base Hexadecimal:\n");
			for (i = 0; i <= contador; i++)
			{
			numeroHexa = numero % 16;
			if (numeroHexa > 9)
			{
				switch (numeroHexa)
				{
					case 10:
						(char)numeroHexa == 'A';
						printf("%c-32",numeroHexa);
					case 11:
						(char)numeroHexa == 'B';
						printf("%c-32",numeroHexa);
					case 12:
						(char)numeroHexa == 'C';
						printf("%c-32",numeroHexa);
					case 13:
						(char)numeroHexa == 'D';
						printf("%c-32",numeroHexa);
					case 14:
						(char)numeroHexa == 'E';
						printf("%c-32",numeroHexa);
					case 15:
						(char)numeroHexa == 'F';
						printf("%c-32",numeroHexa);
				}
			}
			else 
			{
				printf("%d", numeroHexa);
			}
			numero /= 16;
			}
		}
	}
}
