package main;
import java.util.Scanner;

public class Exercicio_4_Aula_3 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int nota1, nota2, nota3; 
		char tipoMedia;
		
		System.out.println("Digite a primeira nota: ");
		nota1 = sc.nextInt();

		System.out.println("Digite a segunda nota: ");
		nota2 = sc.nextInt();

		System.out.println("Digite a terceira nota: ");
		nota3 = sc.nextInt();

		System.out.println("Digite o tipo de media\n('P' ou 'p' para media ponderada e 'A' ou 'a' para aritmetica): ");
		tipoMedia = sc.next().charAt(0);
		
		double media = notas(nota1,nota2,nota3,tipoMedia);
		
		System.out.println("A media dos numero é: "+ media);
		
		sc.close();
	}

	public static double notas(int nota1,int nota2,int nota3, char tipoMedia) {
		double media = 0;
		if (tipoMedia == 'A'|| tipoMedia == 'a') {
		media = (nota1 + nota2 + nota3) / 3;
		}
	
		if (tipoMedia == 'P'|| tipoMedia == 'p') {
		media = (((double)nota1 * 5)+ ((double)nota2 * 3)+ ((double)nota3 * 2)) / 10;
		}
	return media;
	}
}
