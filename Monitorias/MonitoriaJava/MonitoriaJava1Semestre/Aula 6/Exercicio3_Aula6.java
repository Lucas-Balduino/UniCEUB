package main;
import java.util.Scanner;
import java.util.Locale;

public class Exercicio3_Aula6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		int quantidade;
		double soma = 0.0, media = 0.0;
		
		System.out.println("Digite a quantidade de numeros:");
		quantidade = sc.nextInt();
		
		double [] numeros = new double [quantidade];
		
		System.out.println("Digite "+ quantidade +" numeros");
		
		for (int i = 0;i < numeros.length; i++) {
			numeros[i] = sc.nextDouble();
			soma += numeros[i];
		}
		media = soma / quantidade;
		
		System.out.println("Os numeros digitados são:");
		for (int i = 0;i < numeros.length; i++) {
			System.out.println(numeros[i]);
		}
		System.out.println("A soma dos numeros digitados é "+soma);
		System.out.println("A media dos numeros digitados é "+media);
		sc.close();
	}
}
