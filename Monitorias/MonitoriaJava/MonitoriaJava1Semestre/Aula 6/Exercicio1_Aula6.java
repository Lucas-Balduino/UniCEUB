package main;
import java.util.Scanner;
import java.util.Locale;

public class Exercicio1_Aula6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		int quantidade;
		double media = 0.0;
		
		System.out.println("Digite a quantidade de pessoas:");
		quantidade = sc.nextInt();
		
		double [] altura = new double [quantidade];
		
		System.out.println("Digite a altura de "+ quantidade +"pessoas");
		
		for (int i = 0;i < altura.length; i++) {
			altura[i] = sc.nextDouble();
			media += altura[i];
		}
		media /= quantidade;
		
		System.out.println("A media das alturas digitadas e "+media);
		sc.close();
	}
}
