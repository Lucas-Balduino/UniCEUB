package main;
import java.util.Scanner;
import java.util.Locale;

public class Exercicio2_Aula6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		int quantidade, contador = 0;
		
		System.out.println("Digite a quantidade de numeros:");
		quantidade = sc.nextInt();
		
		int [] numeros = new int [quantidade];
		
		System.out.println("Digite "+ quantidade +" numeros");
		
		for (int i = 0;i < numeros.length; i++) {
			numeros[i] = sc.nextInt();
		}
		
		System.out.println("Numeros negativos digitados:");
		for (int i = 0;i < numeros.length; i++) {
			if (numeros[i] < 0) {
				System.out.println(numeros[i]);
				contador++;
			}
		}
		if (contador == 0) {
			System.out.println("Nenhum numero negativo digitado");
		}
		sc.close();
	}
}
