package main;
import java.util.Scanner;
import java.util.Locale;

//Exercicio 5

/*Fazer um programa para ler um conjunto de 
 * nomes de pessoas e suas respectivas idades. 
 * Os nomes devem ser armazenados em um vetor, 
 * e as idades em um outro vetor. Depois, 
 * mostrar na tela o nome da pessoa mais velha.*/

public class Exercicio5_Aula6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		int quantidade, i, idadeMax = 0, index = 0;
		double max = 0;
		
		System.out.println("Digite a quantidade de nomes:");
		quantidade = sc.nextInt();
		
		String [] nomes = new String [quantidade];

		System.out.println("Digite "+ quantidade+" nomes:");
		
		for (i = 0; i < quantidade; i++){
			nomes[i] = sc.next();
		}
		
		int [] idades = new int [quantidade];
		
		System.out.println("Digite "+ quantidade+" idades correspondentes a cada nome:");
		for (i = 0; i < quantidade; i++){
			idades[i] = sc.nextInt();
			if (idades[i] > idadeMax) {
				idadeMax = idades[i];
				index = i;
			}
		}
		System.out.println("O nome da pessoa mais velha é "+nomes[index]);
		sc.close();
	}
}
