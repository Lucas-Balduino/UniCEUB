package main;
import java.util.Locale;
import java.util.Scanner;

//Atividade 2

/*Crie um vetor de inteiros com tamanho
8 e solicite ao usuário que informe
dois índices de elementos que deverão
ser trocados de posição. Imprima o vetor
resultante.*/

public class Atividade_2_Aula_6 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        int i, suporte, indice1, indice2;

        int [] numeros = new int[8];

        System.out.println("Digite 8 numeros: ");
        for (i = 0; i < 8; i++) {
            numeros[i] = sc.nextInt();
        }

        System.out.println("Digite dois indices de elementos que deverão ser trocados:");
        indice1 = sc.nextInt();
        indice2 = sc.nextInt();

        suporte = numeros[indice1];
        numeros[indice1] = numeros[indice2];
        numeros[indice2] = suporte;


        System.out.println("O vetor após alteração ");
        for (i = 0; i < 8; i++) {
            System.out.print(numeros[i] + " ");
        }
        sc.close();
    }
}
