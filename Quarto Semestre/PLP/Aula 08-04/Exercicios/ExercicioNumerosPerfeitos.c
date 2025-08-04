#include <stdio.h>
#include <stdlib.h>

int somaDivisores(int numero)
{
    int i;
    int resultadoSoma = 0;
    for (i = 1; i <= numero/2; i++)
    {
        if (numero % i == 0)
        {
            resultadoSoma += i;
        }
    }
    return resultadoSoma;
}

int main (){
    int numero = 0;
    printf("Digite um numero para descobrir se ele e perfeito:\n");
    scanf("%d", &numero);

    if (somaDivisores(numero) == numero)
    {
        printf("O numero %d e um numero perfeito!", numero);
    }else
    {
        printf("O numero %d nao e um numero perfeito!", numero);
    }
    return 0;
}
