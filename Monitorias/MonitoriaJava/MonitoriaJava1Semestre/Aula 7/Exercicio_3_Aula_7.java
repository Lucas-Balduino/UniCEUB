package main;
import java.util.Scanner;
import java.util.Locale;

//Exercicio 3

/*Crie uma matriz 4x4 de decimais, preencha a matriz e depois:
a) Exiba os valores da sua diagonal principal;
b) Exiba os valores da sua diagonal secundária;
c) A sua matriz transposta.*/

public class Exercicio_3_Aula_7 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        int i, j;

        Double [][] matriz= new Double[4][4];

        System.out.println("Digite os elementos de uma matriz 4x4:");

        for (i = 0; i < 4; i++){
            for(j = 0; j < 4; j++) {
                matriz[i][j] = sc.nextDouble();
            }
        }

        System.out.println("A matriz digitada é:");

        for (i = 0; i < 4; i++){
            for(j = 0; j < 4; j++) {
                System.out.printf("%.2f\t", matriz[i][j]);
                if (j == 3) {
                    System.out.println();
                }
            }
        }

        System.out.println("\nOs elementos da diagonal principal é:");

        for (i = 0; i < 4; i++){
            for(j = 0; j < 4; j++) {
                if (i == j) {
                    System.out.println(matriz[i][j]);
                }
            }
        }

        System.out.println("\nOs elementos da diagonal secundaria é:");

        for (i = 0; i < 4; i++){
            for(j = 0; j < 4; j++) {
                if (i + j == 3) {
                    System.out.println(matriz[i][j]);
                }
            }
        }

        System.out.println("A matriz transposta é:");

        for (i = 0; i < 4; i++){
            for(j = 0; j < 4; j++) {
                System.out.printf("%.2f\t", matriz[j][i]);
                if (j == 3) {
                    System.out.println();
                }
            }
        }
        sc.close();
    }
}
