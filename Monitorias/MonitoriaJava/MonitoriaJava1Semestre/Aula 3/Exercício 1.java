package main;
import java.util.Scanner;

public class Exercicio1_Aula3 {

	public static int mult(int num1, int num2) {
		int resultado;
		resultado = num1 * num2;
		return resultado;
		
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int num1, num2;
		
		System.out.println("Digite dois numeros para fazer a multiplicação:");
		num1 = sc.nextInt();
		num2 = sc.nextInt();
		
		int resultado = mult(num1, num2);
		
		System.out.println("O resultado da multiplicação é "+ resultado);
		
		sc.close();
	}
}
