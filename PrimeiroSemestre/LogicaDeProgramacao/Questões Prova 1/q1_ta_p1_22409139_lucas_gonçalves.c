#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{
	setlocale (LC_ALL, "Portuguese");
	
	float distancia, raio, volume, pi = 3.141516;
	
	printf("Digite o valor do raio\n");
	scanf("%f", &raio);
	
	printf("Digite o valor da dist�ncia entre o toro e o centro da se��o transversal\n");
	scanf("%f", &distancia);
	
	volume = 2 * pi * pi * raio * raio * distancia;
	
	printf("O valor do volume do tor�ide � %.2f", volume);
}
