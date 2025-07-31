#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale (LC_ALL, "Portuguese");
	
	float distancia, raio, volume, pi = 3.141516;
	
	printf("Digite o valor do raio\n");
	scanf("%f", &raio);
	
	printf("Digite o valor da distância entre o toro e o centro da seção transversal\n");
	scanf("%f", &distancia);
	
	volume = 2 * pi * pi * raio * raio * distancia;
	
	printf("O valor do volume do toróide é %.2f", volume);
}
