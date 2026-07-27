#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int i, numero = 0, contador = 0, numeroOctal, numeroHexa;
    for (i = 0; i < 20; i++) {
        while (1) {
            if (numero % 6 == 0 && numero % 2 == 0) {
                printf("Em decimal: %d\n", numero);
                
                printf("Número na base Octal: ");
                while (numero > 0) {
                    numeroOctal = numero % 8;
                    printf("%d", numeroOctal);
                    numero /= 8;
                }
                printf("\n");
                
                printf("Número na base Hexadecimal: ");
                while (numero > 0) {
                    numeroHexa = numero % 16;
                    if (numeroHexa < 10)
                        printf("%d", numeroHexa);
                    else {
                        switch (numeroHexa) {
                            case 10:
                                printf("A");
                                break;
                            case 11:
                                printf("B");
                                break;
                            case 12:
                                printf("C");
                                break;
                            case 13:
                                printf("D");
                                break;
                            case 14:
                                printf("E");
                                break;
                            case 15:
                                printf("F");
                                break;
                        }
                    }
                    numero /= 16;
                }
                printf("\n\n");
                break;
            }
            numero++;
        }
    }
}

