package main;
import java.util.Scanner;
import java.util.Locale;

//Atividade

/*Crie um Array de inteiros com 7 elementos.
 *  Solicite ao usuário que informe um número
 *   que será adicionado ao primeiro e ao 
 *   último elemento do Array. Imprima o Array resultante.*/

public class Atividade1_Aula6 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		Locale.setDefault(Locale.US);
		
		int numero, i;
		
		int [] numeros = new int[7];
		
		System.out.println("Digite 7 numeros:");
		
		for (i = 0; i < numeros.length; i++){
			numeros[i] = sc.nextInt();
		}
		
		System.out.println("Digite um numero para ser introduzido no primeiro e ultimo elemento do array:");
		numero = sc.nextInt();
		
		numeros[0] = numero;
		numeros[6] = numero;
		
		System.out.println("Agora o array é:");
		
		for (i = 0; i < numeros.length; i++){
			System.out.println(numeros[i]);
		}
		sc.close();
	}
}