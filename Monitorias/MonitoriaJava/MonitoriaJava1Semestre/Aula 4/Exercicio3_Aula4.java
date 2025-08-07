package main;
import java.util.Scanner;

public class Exercicio3_Aula4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int  numero = 0;
		
		System.out.println("Digite um numero");
		numero = sc.nextInt();

		for (int i = 1; i <= numero; i++) {
			if (numero % i == 0) {
				System.out.println(i);
			}
		}
	}
}
