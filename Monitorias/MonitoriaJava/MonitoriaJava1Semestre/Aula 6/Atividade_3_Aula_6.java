package main;
import java.util.Locale;
import java.util.Scanner;

//Atividade 3

/*Escreva um programa que leia um número
 inteiro positivo n e gere um array com
 os 'n' primeiros números primos.*/

public class Atividade_3_Aula_6 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        int i, j = 1, quantidade, contador = 0, contadorDeNaoPrimos = 0;


        System.out.println("Digite a quantidade de numeros primos que deseja saber: ");
        quantidade = sc.nextInt();

        int [] primos = new int[quantidade];

        while (contador < quantidade) {
            contadorDeNaoPrimos = 0;
            for (i = j; i > 0; i--) {
                if (j % i == 0 && i != 1){
                    contadorDeNaoPrimos++;
                }
            }
            if (contadorDeNaoPrimos < 2) {
                if (j != 1){
                    primos[contador] = j;
                    contador++;
                }
            }
            j++;
        }
        System.out.println("Os "+ quantidade+" primeiros primos são");
        for (i = 0; i < primos.length; i++) {
            System.out.println(primos[i]);
        }

        sc.close();
    }
}
