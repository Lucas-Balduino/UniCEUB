package Exercicio_2.main;

import java.util.Locale;
import java.util.Scanner;

import Exercicio_2.parametros.funcionario;

//Exercicio 2

/*Fazer um programa para ler os dados de
um funcionário (nome, salário bruto e imposto).
Em seguida, mostrar os dados do funcionário 
(nome e salário líquido). Em seguida, aumentar
o salário do funcionário com base em uma 
porcentagem dada (somente o salário bruto é 
afetado pela porcentagem) e mostrar novamente
os dados do funcionário. Use a classe projetada abaixo. */

public class main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        funcionario x = new funcionario();
        
        System.out.println("Digite o nome do funcionario");
        x.nome = sc.next();
        
        System.out.println("Digite o valor do salario bruto do funcionario");
        x.salarioBruto = sc.nextDouble();

        System.out.println("Digite o valor do imposto do funcionario");
        x.imposto = sc.nextDouble();

        x.salarioLiquido = x.calcSalarioLiquido(x.salarioBruto,x.imposto);
        System.out.println("O salario liquido do funcionario "+ x.nome +" é "+ x.salarioLiquido);

        System.out.println("Indique em porcentagem o quanto deseja aumentar o salario de "+x.nome);
        x.aumentoPorcentagem = sc.nextDouble();

        x.novoSalario = x.aumentoDeSalario(x.salarioBruto, x.aumentoPorcentagem);
        System.out.println("O novo salario desse funcionario é "+ x.novoSalario);
        
        sc.close();
    }

}
