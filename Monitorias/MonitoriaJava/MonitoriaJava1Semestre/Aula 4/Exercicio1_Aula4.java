package main;
import java.util.Scanner;

public class Exercicio1_Aula4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int quantidade, numero, contador = 0;
		System.out.println("Digite a quantidade de valores a serem digitados");
		quantidade = sc.nextInt();
		
		System.out.println("Digite os valores");

		for (int i = 0; i < quantidade; i++) {
			numero = sc.nextInt();
			if (numero >= 10 && numero <= 20) {
				contador++;
			}
		}
		
		quantidade -= contador;
		
		System.out.println("A quantidade de numeros no intervalo de [10,20] é "+contador+" e fora do intervalo é "+quantidade);
	}

}
