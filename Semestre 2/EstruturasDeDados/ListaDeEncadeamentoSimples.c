#include <stdio.h>
#include <stdlib.h>

//Declaracao da estrutura do no

struct no {
	int numero;
	struct no *proximo; //Auto apontamento
};

//Funcao que insere umn o na lista

struct no *inserir(struct no *cabeca, int numero){
	//Caso facil: Lista esta vazia
	if (cabeca == NULL){
		cabeca = (struct no *) malloc(sizeof(struct no));
		cabeca -> numero = numero; //Primeiro "numero" e a variavel da struct no apontado pelo ponteiro cabeca, e o segundo numero e o parametro da funcao. Insercao de um numero na lista
		cabeca -> proximo = NULL; //No cenario de Lista vazia, aponta o ponteiro cabeca para nulo
		
		return cabeca;//Devolver a cabeca atualizada
	}
	
	//Caso dificil: a lista nao esta vazia
	struct no *ponteiro = (struct no *) malloc(sizeof(struct no));
	ponteiro -> numero = numero; //Apontar ponteiro para o numero que a cabeca estava apontando
	ponteiro -> proximo = cabeca; //Apontar 
	cabeca = ponteiro;
	
	return cabeca;
}

//Funcao que imprime a lista
void imprimir(struct no *cabeca) {
	struct no *ponteiro = cabeca; //Criar ponteiro e apontar para a cabeca
	
	while (ponteiro != NULL){ //Enquanto o ponteiro nao apontar para NULL
		printf("%d\n", ponteiro -> numero);
		ponteiro = ponteiro -> proximo; //Ponteiro aponta para o proximo
	}
}

//Funcao de Exclusao de elemento da lista
struct no *remover(struct no *cabeca, int numero){
	//Caso facil: Lista vazia
	if (cabeca == NULL){
		return NULL;
	}
	
	//Caso meio facil: Excluir o primeiro
	if (cabeca -> numero == numero){
		struct no *ponteiro = cabeca; //Ponteiro temporario apontando para a cabeca
		cabeca = cabeca -> proximo; //Apontar cabeca para o proxima numero
		free(ponteiro); //Libera o ponteiro expluido para nao perder espaco de memoria
		
		return cabeca;
	}
	
	//Caso dificil 1: varrer a lista procurando
	struct no *ponteiro = cabeca; //Ponteiro temporario apontando para a cabeca
	while ((ponteiro -> proximo != NULL) && (ponteiro -> proximo -> numero != numero)){ //Primeiro parenteses: Se o proximo aponta para NULL, Segundo Parenteses; Se o numero do proximo no nao e o numero que voce quer excluir 
		ponteiro = ponteiro -> proximo;
	}
	
	if(ponteiro -> proximo -> numero == numero){
		struct no *excluir = ponteiro -> proximo;
		ponteiro -> proximo = ponteiro -> proximo -> proximo;
		free(excluir);
	}
	
	return cabeca;
}

//Funcao principal de execucao do programa

int main(){
	struct no *cabeca = NULL; //Estancia o Struct "no" e aponta o ponteiro cabeca para NULL
	int i = 0;
	
	for (i = 0; i < 10; i++){ //For para inserir 1000000 numeros na lista
		cabeca = inserir(cabeca,i);
	}
	
	for (i = 0; i < 10; i += 2){ //For para excluir numeros pares da lista
		cabeca = remover(cabeca,i);
	}
	

	imprimir(cabeca); //Funcao de imprimir ponteiro
}
