#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 10

/*. Utilizando os dados da tabela acima, construa um programa que informe ao usuário o
tempo necessário para percorrer duas cidades por ele fornecidas. O programa deverá
mostrar um menu com as cidades existentes e o usuário fornecerá o número ou o código 
das cidades origem e destino.*/

void main (){
    setlocale (LC_ALL,"Portuguese");
    int matriz [7][7] = {{0,2,11,6,15,11,1},{2,0,7,12,4,2,15},{11,7,0,11,8,3,13},{6,12,11,0,11,2,1},{15,4,8,10,0,5,13},{11,2,3,2,5,0,14},{1,15,13,1,13,14,0}};
    int i, j;
    
    printf("As cidades estao codificadas de 0 a 6 escolha as cidades desejada:\n");
    printf("0 - Osgliath \n1- Minas Tirith \n2- Edoras \n3- Isengard \n4- Esgaroth \n5- The Shire\n6- Valfenda\n");
    printf("Digite o numero relativo a cidade de origem: \n");
    scanf("%d", &i);
	printf("Digite o numero relativo a cidade de origem: \n");
    scanf("%d", &j);
    
    printf("A distancia entra as duas cidades é %d", matriz[i][j]);
    
}
