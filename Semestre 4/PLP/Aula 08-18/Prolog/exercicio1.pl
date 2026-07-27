animal(onca).
animal(leao).
animal(macaco).
animal(cachorro).
animal(vaca).
animal(gato).
animal(peixe).
animal(mico).
fruta(caju).
fruta(tomate).

progenitor(maria,jose).
progenitor(joao,jose).
progenitor(joao,ana).
progenitor(jose,julia).
progenitor(jose,iris).
progenitor(iris,jorge).

masculino(jose).
masculino(joao).
masculino(jorge).
feminino(maria).
feminino(ana).
feminino(julia).
feminino(iris).

pai(X,Y) :- progenitor(X,Y),masculino(X). /*:- = if; , = and*/
mae(X,Y) :- progenitor(X,Y),feminino(X).
irmao(X,Y) :- progenitor(Z,X), progenitor(Z,Y),X\=Y.
tia(X,Y) :- progenitor(Z,Y) , irmao(X,Z), feminino(X).
/*tia(X,Y) :- progenitor(Z,X) , progenitor(W,Y), progenitor(Z,W), feminino(X), X\=W.*/ /*Logica de Tia sem Uso de um Irmao*/
