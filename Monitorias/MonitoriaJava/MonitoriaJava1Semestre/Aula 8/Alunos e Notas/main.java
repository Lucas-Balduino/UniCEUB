package Alunos_e_Notas.main;

import java.util.Locale;
import java.util.Scanner;

import Alunos_e_Notas.Entidades.Alunos;


/*Modele uma classe Aluno que represente um estudante
em uma escola. Ela deve ter atributos como nome, 
matricula e um array para armazenar as notas do aluno 
em diferentes disciplinas. Implemente métodos para calcular
a média das notas e verificar se o aluno foi aprovado ou reprovado. */

public class main {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        Alunos x = new Alunos();
        
        System.out.println("Digite o nome do aluno");
        x.nome = sc.next();
        
        System.out.println("Digite o numero da matricula do aluno");
        x.matricula = sc.nextInt();

        System.out.println("Digite a quantidade de notas que o aluno tirou");
        x.quantidade = sc.nextInt();

        x.notas = new double[x.quantidade];
        
        System.out.println("Digitas as "+ x.quantidade +" notas do aluno "+ x.nome);

        for (int i = 0; i < x.quantidade; i++){
            x.notas[i] = sc.nextDouble();
        }

        x.media = x.calcMedia(x.notas);
        System.out.println("A media do aluno "+ x.nome +" é: "+x.media);
        
        x.verificar(x.media);

        sc.close();
    }
    
}
