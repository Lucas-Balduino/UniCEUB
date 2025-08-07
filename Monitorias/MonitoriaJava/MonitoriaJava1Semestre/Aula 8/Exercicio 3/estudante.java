package Exercicio_3.Entidades;

public class estudante {
    public String nome;
    public double nota1;
    public double nota2;
    public double nota3;
    public double notaFinal;
    public double restoNota;

    public double calcNotaFinal(double nota1,double nota2,double nota3){
        notaFinal = nota1 + nota2 + nota3;
        return notaFinal; 
    }
    public double calcRestoNota(double notaFinal){
        restoNota = 60 - notaFinal;
        return restoNota;
    }
}
