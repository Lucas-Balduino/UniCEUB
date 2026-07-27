#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

//exercicio 10 lista

void main(void)
{
	setlocale(LC_ALL,"Portuguese");
	
	float a, b, c, delta, raiz1 ,raiz2;
		
	printf("Em uma equação de formato ax*2 + bx + c = 0");
	
	printf("\nDigite o coeficiente a: ");
	scanf("%f", &a);
	
	printf("\nDigite o coeficiente b: ");
	scanf("%f", &b);
	
	printf("\nDigite o coeficiente c: ");
	scanf("%f", &c);
	
	delta = (b*b -4*a*c);
	
	if (delta > 0) {
		printf ("\nDelta = %.2f\n", delta);
		
		raiz1 = ((-b + sqrt(delta)) / (2.0*a));
		raiz2 = ((-b - sqrt(delta)) / (2.0*a));
	
		printf ("\nEssa equação possui duas raízes\nAs raizes da equação são: \nRaiz 1: %.2f\nRaiz 2: %.2f \n", raiz1, raiz2);
	}
	
	if (delta == 0) {
		printf ("\nDelta = %.2f\n", delta);
		
		raiz1 = ((-b + sqrt(delta)) / (2.0*a));
		raiz2 = ((-b - sqrt(delta)) / (2.0*a));
	
		printf ("\nEssa equação possui duas raízes iguais\nAs raizes da equação são: \nRaiz 1: %.2f\nRaiz 2: %.2f \n", raiz1, raiz2);
	}
	
	if (delta < 0) {
		printf ("Essa equação não possui raizes Reais");
	}
}
