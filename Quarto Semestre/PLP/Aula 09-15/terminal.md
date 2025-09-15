PS C:\Users\lucas.balduino\UniCEUB> cd '.\Quarto Semestre\'
PS C:\Users\lucas.balduino\UniCEUB\Quarto Semestre> cd .\PLP\
PS C:\Users\lucas.balduino\UniCEUB\Quarto Semestre\PLP> cd "Aula 09-15"
PS C:\Users\lucas.balduino\UniCEUB\Quarto Semestre\PLP\Aula 09-15> swipl
Welcome to SWI-Prolog (threaded, 64 bits, version 9.2.3)
SWI-Prolog comes with ABSOLUTELY NO WARRANTY. This is free software.
Please run ?- license. for legal details.

For online help and background, visit https://www.swi-prolog.org
For built-in help, use ?- help(Topic). or ?- apropos(Word).

1 ?- use_module(library(csv)).
true.

2 ?- csv_read_file('dados.csv', Linhas). 
Linhas = [row(lucas, 20, programador), row(pedro, 21, pedreiro), row(vitor, 22, engenheiro)].

3 ?-