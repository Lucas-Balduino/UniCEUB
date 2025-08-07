package AulaEncapsulamento;
import AulaEncapsulamento.Aluno.Aluno;
import AulaEncapsulamento.Aluno.Monitor;
import AulaEncapsulamento.Pessoa.Pessoa;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Aluno aluno = new Aluno();
        Monitor monitor = new Monitor();

        System.out.println("Aluno, digite seu nome: ");
        aluno.setNome(sc.nextLine());
        System.out.println("Monitor, digite seu nome: ");
        monitor.setIdade(sc.nextInt());
        System.out.println("Aluno, digite sua idade: ");
        monitor.setIdade(sc.nextInt());
        System.out.println("Monitor, digite sua idade: ");
        monitor.setIdade(sc.nextInt());

        /*
        System.out.println(pessoa.getNome());
        System.out.println(pessoa.getIdade());
        */

        sc.close();
    }
}
