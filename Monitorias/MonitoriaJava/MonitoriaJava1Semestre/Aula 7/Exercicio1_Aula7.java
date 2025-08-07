package main;
import java.util.Scanner;
import java.util.Locale;

//Exercicio 1

/*Fazer um programa para ler um número inteiro N
 *  e uma matriz de ordem N contendo números inteiros.
 *   Em seguida, mostrar a diagonal principal e a 
 *   quantidade de valores negativos da matriz.*/

public class Exercicio1_Aula7 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		int quantidade, i, j, contador = 0;
		
		System.out.println("Digite a ordem da matriz:");
		quantidade = sc.nextInt();
		
		int [][] matriz= new int[quantidade][quantidade];

		System.out.println("Digite os elementos da matriz:");
		
		for (i = 0; i < quantidade; i++){
			for(j = 0; j < quantidade; j++) {
				matriz[i][j] = sc.nextInt(); 
				if(matriz[i][j] < 0) {
					contador++;
				}
			}
		}
		
		System.out.println("A matriz digitada é:");
		
		for (i = 0; i < quantidade; i++){
			for(j = 0; j < quantidade; j++) {
				System.out.printf("%d\t", matriz[i][j]);
				if (j == (quantidade - 1)) {
					System.out.println("");
				}
			}
		}
		System.out.println("\nOs elementos da diagonal principal é:");
		
		for (i = 0; i < quantidade; i++){
			for(j = 0; j < quantidade; j++) {
				if (i == j) {
					System.out.println(matriz[i][j]);
				}
			}
		}
		System.out.println("A quantidade de valores negativos da matriz é:"+contador);
		
		sc.close();
	}
}
