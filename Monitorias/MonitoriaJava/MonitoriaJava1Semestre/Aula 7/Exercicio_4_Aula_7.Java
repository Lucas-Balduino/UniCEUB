package main;
import java.util.Locale;
import java.util.Scanner;

//Exercicio 4

/*Crie uma matriz 3x3 de inteiros, preencha a matriz
 e verifique se a matriz é um quadrado mágico. Diz-se
 que uma matriz é um quadrado mágico quando a soma de
 todas as suas linhas, todas as suas colunas, sua
 diagonal principal e sua diagonal secundária resultam
 no mesmo valor. Exemplo abaixo. */

public class Exercicio_4_Aula_7 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        int i, j, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0,somaColuna1= 0,somaColuna2= 0,somaColuna3= 0,somaLinha1= 0,somaLinha2= 0,somaLinha3= 0;

        int [][] matriz= new int[3][3];

        System.out.println("Digite os elementos de uma matriz 3x3:");

        for (i = 0; i < 3; i++){
            for(j = 0; j < 3; j++) {
                matriz[i][j] = sc.nextInt();
                if (j == 0) {
                    somaColuna1 += matriz[i][j];
                }
                if (j == 1) {
                    somaColuna2 += matriz[i][j];
                }
                if (j == 2) {
                    somaColuna3 += matriz[i][j];
                }
                if (i == 0) {
                    somaLinha1 += matriz[i][j];
                }
                if (i == 1) {
                    somaLinha2 += matriz[i][j];
                }
                if (i == 2) {
                    somaLinha3 += matriz[i][j];
                }
                if (i == j) {
                    somaDiagonalPrincipal += matriz [i][j];
                }
            }
        }

        System.out.println("A matriz digitada é:");

        for (i = 0; i < 3; i++){
            for(j = 0; j < 3; j++) {
                System.out.printf("%d\t", matriz[i][j]);
                if (j == 2) {
                    System.out.println();
                }
            }
        }

        if (somaColuna1 == somaColuna2 || somaColuna1 == somaColuna3 || somaColuna1 == somaLinha1 || somaColuna1 == somaLinha2 || somaColuna1 == somaLinha3 || somaColuna1 == somaDiagonalSecundaria || somaColuna1 == somaDiagonalPrincipal) {
            System.out.println("Essa matriz 3x3 é um quadrado magico!");
        }
        else {
            System.out.println("Essa matriz 3x3 não é um quadrado magico!");
        }
        sc.close();
    }

}
