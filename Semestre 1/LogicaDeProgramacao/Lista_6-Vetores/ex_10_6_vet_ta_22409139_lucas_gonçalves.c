#include <stdio.h>
#include <locale.h>
#include <string.h>

//Exercicio 10

/*. Leia uma palavra e mostre-a na ordem inversa. Utilize a função comprimento da
string.*/

void main(){
	setlocale (LC_ALL,"Portuguese");
	int i;
	char palavra[100];
	
	printf("Digite uma palavra\n");
	gets(palavra);
	
	for (i = (strlen(palavra) - 1); i >= 0; i--){
		printf("%c", palavra[i]);
	} 
}
