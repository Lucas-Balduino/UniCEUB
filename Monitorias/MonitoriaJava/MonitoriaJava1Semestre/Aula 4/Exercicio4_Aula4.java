package main;
import java.util.Scanner;

public class Exercicio4_Aula4 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int  numero = 0;
		
		System.out.println("Digite um numero");
		numero = sc.nextInt();
		if (numero != 0) { 
			for (int i = (numero - 1); i > 0; i--) {
				numero *= i;
			}
			System.out.println("O fatorial desse numero é "+ numero);
		}
		else {
			System.out.println("Fatorial de 0 é 1");
		}
		
	}
}
