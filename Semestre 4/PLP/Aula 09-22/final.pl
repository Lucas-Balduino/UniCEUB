:- use_module(library(csv)).
:- dynamic dados_pobreza/21.

carregar_dados(Arquivocsv) :-
  csv_read_file(Arquivocsv, Linhas, [functor(dados_pobreza), separator(44), strip(true)]),
    maplist(assertz, Linhas),
    length(Linhas, NumLinhas),
  format('~w registros carregados com sucesso.~n', [NumLinhas]).

listar_alguns_dados :- 
    findall(dados_pobreza(Ref,_,Pobreza,ExtPobreza,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_),
            dados_pobreza(Ref,_,Pobreza,ExtPobreza,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_,_),
            Primeiros),
    length(Primeiros,Total),
    format('Total de Registros: ~w~n', [Total]),
    take(5,Primeiros,Amostra),
    forall(member(Reg,Amostra),
    format('~w~n',[Reg])).

take(0,_,[]) :- !.
take(_,[],[]) :- !.
take(N,[H|T],[H|R]) :- N>0, N1 is N - 1, take(N1,T,R).