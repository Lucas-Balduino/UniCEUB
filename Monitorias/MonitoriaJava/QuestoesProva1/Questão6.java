import java.util.Scanner;

public class Questão6 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Digite o numero de Bandejas:");
        int numero = sc.nextInt();

        if (numero > 0) {
            System.out.println("Positivo");
        }
        else if (numero < 0) {
            System.out.println("Negativo");
        }
        else {
            System.out.println("Nulo");
        }
        sc.close();
    }
}

