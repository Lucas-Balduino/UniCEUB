package main;
import java.util.Scanner;

public class Exercicio5_Aula4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int  numero = 0, quadrado, cubo;
		
		System.out.println("Digite um numero");
		numero = sc.nextInt();

		for (int i = 1; i <= numero; i++) {
			quadrado = i * i;
			cubo = i * i * i;
			System.out.println(i+" "+quadrado+" "+cubo);
		}
	}
}
