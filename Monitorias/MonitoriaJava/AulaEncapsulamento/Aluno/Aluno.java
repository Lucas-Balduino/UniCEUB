package AulaEncapsulamento.Aluno;

import AulaEncapsulamento.Pessoa.Pessoa;

public class Aluno extends Pessoa {
    private int registroAluno;
    private int nota;

    public int getRegistroAluno() {
        return registroAluno;
    }

    public void setRegistroAluno(int registroAluno) {
        this.registroAluno = registroAluno;
    }

    public int getNota() {
        return nota;
    }

    /*
    public void setNota(int nota) {
        this.nota = nota;
    }
        #Nota setada pela funcao notas
    */
    public int prova(int numeroDeAcertos){
        return nota = numeroDeAcertos;
    }
}
