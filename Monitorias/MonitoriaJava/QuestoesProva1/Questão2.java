import java.util.Scanner;

public class Questão2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Digite o numero que deseja saber o factorial:");
        int numero = sc.nextInt();

        int factorial = numero;


        if (numero == 0) {
            System.out.println("1");
        }

        else {
        while (numero > 1) {
            numero--;
            factorial *= numero;
        }

            System.out.println(factorial);
        }
        sc.close();
    }
}
