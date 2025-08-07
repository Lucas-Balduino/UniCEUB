package main;
import java.util.Scanner;

public class Exercicio4_Aula5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int  numero = 0,par = 0, impar = 0;
		
		while (numero != -1) {
			System.out.println("Digite um numero: (Digite -1 para sair)");
			numero = sc.nextInt();
			if (numero % 2 == 0) {
				par++;
			}
			if (numero % 2 != 0 && numero != -1) {
				impar++;
			}
		}
		System.out.println("A quantidade de numeros pares é "+par+" e numeros impares é "+impar);
		sc.close();
	}
}
