package Exercicio_2.parametros;

public class funcionario{
    public String nome;
    public double salarioBruto;
    public double imposto;
    public double aumentoPorcentagem;
    public double novoSalario;
    public double salarioLiquido;

    public double calcSalarioLiquido (double salarioBruto, double imposto){
        double salarioLiquido = salarioBruto - imposto;
        return salarioLiquido;
    }

    public double aumentoDeSalario(double salarioBruto,double aumentoPorcentagem){
        double novoSalario = salarioBruto * ( 1 + aumentoPorcentagem / 100);
        return novoSalario;
    }
}
