package main;
import java.util.Scanner;

public class Exercicio1_Aula5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int  numero = 0;
		
		System.out.println("Digite a senha");
		numero = sc.nextInt();
		
		while(numero != 2002) {
			System.out.println("Senha Invalida");
			numero = sc.nextInt();
		}
		System.out.println("Acesso Permitido");
		
	}
}
