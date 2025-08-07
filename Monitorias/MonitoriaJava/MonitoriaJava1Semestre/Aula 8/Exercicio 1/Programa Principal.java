package Exercicio_1.Programas;

import java.util.Locale;
import java.util.Scanner;

import Exercicio_1.Entidades.retangulo;

//Exercicio 1

/*Fazer um programa para ler os valores da 
largura e altura de um retângulo.Em seguida,
mostrar na tela o valor de sua área,perímetro
e diagonal. Usar uma classe comomostrado no 
projeto ao lado. */

public class Exercicio_1_Aula_8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        retangulo x = new retangulo();
        
        System.out.println("Digite o valor da altura do retangulo");
        x.altura = sc.nextDouble();
        
        System.out.println("Digite o valor da largura do retangulo");
        x.largura = sc.nextDouble();

        x.area = x.calcArea(x.altura,x.largura);
        System.out.println("A area desse retangulo é");
        System.out.println(x.area);

        x.perimetro = x.calcPerimetro(x.altura, x.largura);
        System.out.println("O perimetro desse retangulo é");
        System.out.println(x.perimetro);
        
        x.diagonal = x.calcDiagonal(x.altura, x.largura);
        System.out.println("A diagonal desse retangulo é");
        System.out.println(x.diagonal);
        sc.close();
    }

}
