package main;
import java.util.Scanner;

public class Exercicio2_Aula5 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int  combustivel, alcool = 0, gasolina = 0, diesel = 0;
		
		System.out.println("Digite o tipo de combustivel que deseja:");

		System.out.println("1.Álcool 2.Gasolina 3.Diesel 4.Fim");
		do {
			combustivel = sc.nextInt();
			switch (combustivel) {
			case 1:
				alcool++;
				break;
			case 2:
				gasolina++;
				break;
			case 3:
				diesel++;
				break;
			case 4:
				System.out.println("MUITO OBRIGADO!");
				break;
			default:
				System.out.println("Codigo invalido digite novamente");
			}
		}
		while (combustivel != 4);
		System.out.println("Alcool: "+alcool);
		System.out.println("Gasolina: "+gasolina);
		System.out.println("Diesel: "+diesel);
	}
}
