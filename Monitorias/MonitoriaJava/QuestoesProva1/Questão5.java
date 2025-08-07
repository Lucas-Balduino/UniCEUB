import java.util.Scanner;

public class Questão5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Digite o numero de Bandejas:");
        int numDeAlunos = sc.nextInt();
        int numDeMonitores = sc.nextInt();

        if (numDeAlunos + numDeMonitores > 50) {
            System.out.println("N");
        }
        else {
            System.out.println("S");
        }
        sc.close();
    }
}

