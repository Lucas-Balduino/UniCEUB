#include <stdio.h>
#include <stdlib.h>

//Declaracao de estrutura do no
struct no{
    int numero;
    struct no *proximo;
};

//Funcao que incere um no na lista
struct no *inserir(struct no *cabeca, int numero){
    //Alocacao do novo no
    struct no *novoNo = (struct no *) malloc(sizeof(struct no));
    novoNo -> numero = numero;
    novoNo -> proximo = NULL;

    //Caso facil, Lista vazia
    if (cabeca == NULL){
        novoNo -> proximo = novoNo;
        return novoNo;
    }
    
    //Caso dificil, Lista nao vazia, ja extiste um no. incersao no final do no
    struct no *ultimo = cabeca;
    while (ultimo -> proximo != cabeca){
        ultimo = ultimo -> proximo;
    }
    ultimo -> proximo = novoNo;
    novoNo -> proximo = cabeca;

    return cabeca;
}

//Funcao que remove um no da lista
struct no *remover (struct no *cabeca, int numero){
    //Caso facil 1: Lista vazia
    if (cabeca == NULL){
        return NULL;
    }

    //Caso 2 e 3: remover o primeiro ou o unico
    if (cabeca -> numero == numero){
        //Caso 3: remover o primeiro e unico
        if (cabeca == cabeca -> proximo){
            free(cabeca);
            return NULL;
        }else{ //Caso 2 remover o primeiro que nao e o unico
            struct no *ultimo = cabeca;
            while (ultimo -> proximo != cabeca){
                ultimo = ultimo -> proximo;
            }
            struct no *excluir = cabeca;
            cabeca = cabeca -> proximo;
            ultimo -> proximo = cabeca;
            free(excluir);

            return cabeca;
        }
    }
    //Caso 4, 5 e 6: meio ou no final
    struct no *ponteiro = cabeca;
    while ((ponteiro -> proximo != cabeca) && (ponteiro -> proximo -> numero != numero)){ //Varrer a lista toda e nao achar / Parar exatamente na posicao na posicao anterior que eu quero excluir
        ponteiro = ponteiro -> proximo;
    }

    //Caso 6: varreu a lista inteira e nao encontrei
    if (ponteiro -> proximo == cabeca){ 
        return cabeca;
    }

    // Caso (4 e 5) excluir no meio ou no final
    struct no *exluir = ponteiro -> proximo;
    ponteiro -> proximo = ponteiro -> proximo -> proximo;
    free(exluir);

    return cabeca;
}

// Funcao que imprime a lista na tela
void imprimir (struct no *cabeca){
    //Caso facil : Lista vazia
    if (cabeca == NULL){
        return;
    }

    //Caso dificil: tem pelo menos 1 no
    struct no *ponteiro = cabeca;
    do{
        printf("%d\n", ponteiro -> numero);
        ponteiro = ponteiro -> proximo;

    } while (ponteiro != cabeca);
}

//Funcao que constroi um menu na tela
int menu(){
    int opcao = 0;
    printf("+================+\n");
    printf("| Menu de Opcoes |\n");
    printf("+================+\n");
    printf("| 1 - Inserir    |\n");
    printf("| 2 - Remover    |\n");
    printf("| 3 - Imprimir   |\n");
    printf("| 4 - Sair       |\n");
    printf("+================+\n");
    printf("|Digite sua Opcao|\n");
    scanf("%d", &opcao);

    return opcao;
}

//Funcao principal de execucao
int main(){
    struct no *cabeca = NULL;
    int opcao = 0;
    int numero = 0;

    while (opcao != 4){
        opcao = menu ();

        switch (opcao){
        case 1:
            printf("Digite um numero: ");
            scanf("%d", &numero);
            cabeca = inserir(cabeca,numero);
            break;
        case 2:
            printf("Digite o numero que deseja remover: ");
            scanf("%d", &numero);
            cabeca = remover(cabeca,numero);
            break;
        
        case 3:
            imprimir(cabeca);
            break;

        default:
            break;
        }
    }
}
