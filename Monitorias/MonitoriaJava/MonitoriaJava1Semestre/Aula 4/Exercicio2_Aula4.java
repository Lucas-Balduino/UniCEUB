package main;
import java.util.Scanner;

public class Exercicio2_Aula4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int numero = 0;
		
		System.out.println("Digite um numero");
		numero = sc.nextInt();

		for (int i = 0; i <= numero; i++) {
			if (i % 2 != 0) {
				System.out.println(i);
			}
		}
	}
}
