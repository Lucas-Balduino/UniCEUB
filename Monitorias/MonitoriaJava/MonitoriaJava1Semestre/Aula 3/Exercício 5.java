package main;
import java.util.Scanner;

public class Exercicio_5_Aula_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String palavra;
		char charAntigo, charNovo;
		
		System.out.println("Digite uma palavra");
		palavra = sc.next();

		System.out.println("Digite uma letra que deseja substituir");
		charAntigo = sc.next().charAt(0);

		System.out.println("Digite a letra que deseja adicionar");
		charNovo = sc.next().charAt(0);
		
		palavra = palavra.replace(charAntigo,charNovo);
		
		System.out.println(palavra);
		
		sc.close();
	}

}
