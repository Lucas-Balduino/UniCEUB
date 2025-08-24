# Automatos 

## Automato Finito Deterministico (AFD)
    A partir de um determinado estado e do simbolo lido pode assumir um **unico** estado.
### Fita
 - Dispositivo de entrada; 
 - Contem a informação a ser processada;
 - Dividida em Células
 - Cada célula armazena um simbolo
 - Os simbolos pertencem a um alfabeto
 - Não é possivel gravar na fita
 - A palavra a ser processada ocupa toda a fita

### Unidade Controle 
 - Reflete o estado corrente da maquina;
 - Possui unidade de leitura (Cabeça de Leitura)
 - Acessa uma celula da fita de cada vez
 - Movimenta-se exclusivamente da esquerda para direita
 - Numero finito de estados
 - Posição inicial da cabeça: celula mais a esquerda da fita
 
### Programa, Função Programa ou Função Transição:
 - A partir do estado corrente (ou estado atual) e do sımbolo lido, a
função de transição (δ) define o novo estado do autômato
 - Comanda as Leituras
 - Define o Estado de Máquina
 - Ex: δ(q1, b) = q4 ⇒ Se o estado atual é o q1 e o símbolo lido foi “b”,
então vá para o estado q4

### Definição Matemática
Autômato Finito Determinístico (AFD)
    M = (Σ, Q, δ, q0, F)
Onde:
    Σ ⇒ alfabeto
    Q ⇒ conjunto de estados possíveis do AFD
    δ ⇒ função de transição
    δ : Q × Σ → Q
    q0 ⇒ estado inicial
    F ⇒ conjunto dos estados finais (F é um subconjunto de Q)

## Automato Finito Não Deterministico (AFND ou AFN)
    A partir de um determinado estado e do simbolo lido pode assumir um **conjunto** de estados

## Automato Finito com Movimentos Vazios ou e-Transições (AFe) 
    A partir de um determinado estado e **sem ler** um simbolo pode assumir um **conjunto** de estados


