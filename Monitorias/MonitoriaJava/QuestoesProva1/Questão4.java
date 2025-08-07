import java.util.Scanner;

public class Questão4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Digite o numero de Bandejas:");
        int numDeBandejas = sc.nextInt();

        int contadorDeCoposQuebrados = 0;
        for (int i = 0; i < numDeBandejas; i++) {
            //System.out.println("Digite o numero de Latas:");
            int numDeLatas = sc.nextInt();
            //System.out.println("Digite o numero de Copos:");
            int numDeCopos = sc.nextInt();
            if (numDeCopos < numDeLatas) {
                contadorDeCoposQuebrados += numDeCopos;
            }

        }
        System.out.println(contadorDeCoposQuebrados);
        sc.close();
    }
}

