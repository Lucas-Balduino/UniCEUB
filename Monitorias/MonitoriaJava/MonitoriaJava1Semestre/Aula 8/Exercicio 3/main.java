package Exercicio_3.main;

import java.util.Locale;
import java.util.Scanner;

import Exercicio_3.Entidades.estudante;

/*Fazer um programa para ler o nome de um aluno
e as três notas que ele obteve nos três trimestres
do ano (primeiro trimestre vale 30 e o segundo e 
terceiro valem 35 cada). Ao final, mostrar qual a
nota final do aluno no ano. Dizer também se o aluno
está aprovado (PASS) ou não (FAILED) e, em caso negativo, 
quantos pontos faltam para o aluno obter o mínimo para
ser aprovado (que é 60% da nota). 
Você deve criar uma classe Student para resolver este problema. */

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        estudante x = new estudante();
        
        System.out.println("Digite o nome do estudante");
        x.nome = sc.next();
        
        System.out.println("Digite o valor da nota do primeiro semestre");
        x.nota1 = sc.nextDouble();

        System.out.println("Digite o valor da nota do segundo semestre");
        x.nota2 = sc.nextDouble();

        System.out.println("Digite o valor da nota do terceiro semestre");
        x.nota3 = sc.nextDouble();

        x.notaFinal = x.calcNotaFinal(x.nota1, x.nota2, x.nota3);
        System.out.println("A nota final do aluno "+ x.nome +" é: "+x.notaFinal);
        
        x.restoNota = x.calcRestoNota(x.notaFinal);
        if (x.notaFinal > 60){
            System.out.println("Ele passou!");
        }
        else{
            System.out.println("Ele não passou!");
            System.out.println("Faltou "+x.restoNota+" pontos");
        }

        sc.close();
    }
    
}
