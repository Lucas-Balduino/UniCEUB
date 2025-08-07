package main;
import java.util.Scanner;

/*Faça uma função que receba um inteiro e mostre na tela se ele for múltiplo de 2.*/

public class Exercicio_2_Aula_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x;

        System.out.println("Digite um numero");
        x = sc.nextInt();
        multiplo(x);
    }

    public static int multiplo(int x){
        if (x % 2 == 0){
            System.out.println("O numero "+x+" e multiplo de 2");
        }
        if (x % 2 != 0) {
            System.out.println("O numero " + x + " nao e multiplo de 2");
        }
        return 0;
    }
}

