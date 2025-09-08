d(0).
d(1).
b([A,B,C]) :- d(A),d(B),d(C).
bin([A,B,C,D]) :- d(A),!,d(B),d(C),d(D). /*Corta a arvore na primeira ocorrencia do A*/

/*Funções Continuas, se nao cumpre a primeira condicao passa para as proximas*/

f(X,0) :- X < 3. /*Verifica se X é menor que tres e retorna 0*/
f(X,8) :- X >= 3, X < 9. /*Verifica se X é maior que tres e menor que 9 e retorna 8*/
f(X,23) :- X >= 9. /*Verifica se X é maior ou igual a 9 e retorna 23*/

g(Y,Z) :- Y < 8, Z is 3*Y.
g(Y,Z) :- Y >= 8, Z is Y*Y.

lista([sapato,camiseta,calca,bermuda,blusinha,shein]).

/*
Consulta de Listas:
lista([A|_]). -> Verifica o primeiro item da lista
lista([A|B]). -> Verifica o primeiro item isolado e o resto da lista
lista([A,B|C]). -> Verifica o primeiro e o segundo item da lista
isolados e o resto da lista
*/

consultaLista(Produto) :- lista(Lista), member(Produto,Lista).

listaTurma([lucas, marcos,joao,leticia]).
primeiroAluno(A) :- listaTurma([A|_]).
terceiroAluno(A) :- listaTurma([_,_,_,A|_]).
consultaTurma(Aluno) :- listaTurma(Consulta),merber(Aluno,Consulta).

