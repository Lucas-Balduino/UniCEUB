package Alunos_e_Notas.Entidades;

public class Alunos {
    public String nome;
    public int matricula;
    public int quantidade;
    public double [] notas = new double [quantidade];
    public double media;

    public double calcMedia(double [] notas){
        for (int i = 0; i < notas.length;i++){
            media += notas[i];
        }
        media /= notas.length;
        return media;
    }

    public void verificar(double media){
        if(media >= 6){
            System.out.println("Aluno Aprovado!");
        }
        else{
            System.out.println("Aluno Reprovado!");
        }
    }
}
