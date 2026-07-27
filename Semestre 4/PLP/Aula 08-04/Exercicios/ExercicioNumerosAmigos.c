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
    int numero1 = 0;
    int numero2 = 0;
    printf("Digite dois numeros para descobrir se eles sao amigos:\n");
    scanf("%d", &numero1);
    scanf("%d", &numero2);

    if (somaDivisores(numero1) == numero2 && somaDivisores(numero2) == numero1)
    {
        printf("Os numeros %d e %d sao amigos! :D",numero1, numero2);
    } else
    {
        printf("Os numeros %d e %d nao sao amigos! :C",numero1, numero2);
    }
    
    
    return 0;
}


