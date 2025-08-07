package main;
import java.util.Scanner;

public class Exercicio_6_Aula_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String palavra;
		char charNovo;
		
		System.out.println("Digite uma palavra");
		palavra = sc.next();

		String palavraNova = palavra.replace('a', ' ');
		palavraNova = palavraNova.replace('e', ' ');
		palavraNova = palavraNova.replace('i', ' ');
		palavraNova = palavraNova.replace('o', ' ');
		palavraNova = palavraNova.replace('u', ' ');
		
		String[] vetor = palavraNova.split(" ");
		
		for (int i = 0; i < vetor.length; i++) {
			System.out.print(vetor[i]);
		}
		sc.close();
	}
}
