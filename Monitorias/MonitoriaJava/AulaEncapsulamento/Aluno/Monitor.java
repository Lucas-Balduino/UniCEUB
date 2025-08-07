package AulaEncapsulamento.Aluno;

import AulaEncapsulamento.Pessoa.Pessoa;

import java.util.Scanner;

public class Monitor extends Pessoa {
    Scanner sc = new Scanner(System.in);
    private int id;

    public int corrigirProva(int numeroDeAcertos){
        System.out.println("Quantos acertos o aluno teve?");

        return numeroDeAcertos;
    }
}
