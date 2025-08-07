package main;
import java.util.Scanner;

public class Exercicio3_Aula5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int  numero = 0, max = 0, min = 0;
		
		while (numero != -1) {
			System.out.println("Digite um numero: (Digite -1 para sair)");
			numero = sc.nextInt();
			if (numero > max) {
				max = numero;
			}
			if (numero < min && numero != -1) {
				min = numero;
			}
		}
		System.out.println("O maior numero da sequencia é "+max+" e o menor é "+min);
		sc.close();
	}
}
