/*a)*/
funcionario(1,pedro,800,[]).
funcionario(2,gabriel,1200,[toto,luke]).
funcionario(3,ivo,903.5,[rai,eva]).
funcionario(4,matheus,4000,[]).
funcionario(5,ricardo,3500,[arrascaeta,gabigol]).
funcionario(6,gabriel,6000,[joao,marina,amanda]).

/*b)*/
doisfun(FunA,FunB,SomaSal) :-  funcionario(_,FunA,SalA,_), funcionario(_,FunB,SalB,_), SomaSal  is  SalA + SalB, FunA \= FunB, FunA @< FunB.

/*c)*/
funefetivado(F,S) :- funcionario(_,F,S,_), S >= 1200.

/*d)*/
mesmonome(FunA,FunB) :- funcionario(IdA,FunA,_,_),funcionario(IdB,FunB,_,_), FunA == FunB, IdA \= IdB, IdA @< IdB.

/*e)*/
salmaior(NomeA,NomeB) :- funcionario(_,NomeA,SA,_), funcionario(_,NomeB,SB,_), SA > SB, NomeA \= NomeB,NomeA @< NomeB.
