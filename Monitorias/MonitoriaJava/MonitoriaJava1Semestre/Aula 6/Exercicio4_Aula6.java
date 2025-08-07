package main;
import java.util.Scanner;
import java.util.Locale;

public class Exercicio4_Aula6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		int quantidade, contador = 1, index = 0;
		double max = 0;
		
		System.out.println("Digite a quantidade de numeros:");
		quantidade = sc.nextInt();
		
		double [] numeros = new double [quantidade];
		
		System.out.println("Digite "+ quantidade +" numeros");
		
		for (int i = 0;i < numeros.length; i++) {
			numeros[i] = sc.nextDouble();
			if (contador == 1) {
				max = numeros[i];
			}
			contador++;
			if (numeros[i] > max) {
				max = numeros[i];
				index = i;
			}
		}
		
		System.out.println("O maior numeros digitado é"+ max+"localizado no index"+index);
		sc.close();
	}
}
