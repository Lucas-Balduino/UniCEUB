import java.util.Scanner;
public class Questão7 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Digite o numero de cliques:");
        int numeroDeCliques = sc.nextInt();

        int interruptor1 = 0;
        int interruptor2 = 0;

        for (int i = 1; i <= numeroDeCliques; i++) {
            int escolha = sc.nextInt();
            if (escolha == 1) {
                interruptor1++;
            }
            if (escolha == 2) {
                interruptor1++;
                interruptor2++;
            }
        }

        if (interruptor1 % 2 == 0) {
            System.out.println("0");
        }
        else {
            System.out.println("1");
        }
        if (interruptor2 % 2 == 0) {
            System.out.println("0");
        }
        else {
            System.out.println("1");
        }
        sc.close();
    }
}

