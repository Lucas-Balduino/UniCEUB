import java.util.Scanner;

public class Questão1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        //System.out.println("Digite a quantidade de questões:");
        int tamanhoDoArray = sc.nextInt();
        //System.out.println("Digite as respostas das questões:");
        char []respostas = new char[tamanhoDoArray];
        for (int i = 0; i < tamanhoDoArray; i++) {
            respostas[i] = sc.next().charAt(0);
        }

        //System.out.println("Digite o gabarito das questões:");
        char []gabarito = new char[tamanhoDoArray];
        for (int i = 0; i < tamanhoDoArray; i++) {
            gabarito[i] = sc.next().charAt(0);
        }

        for (int i = 0; i < tamanhoDoArray; i++) {
            System.out.println(respostas[i]+" "+gabarito[i]);;
        }
        int contador = 0;
        for (int i = 0; i < tamanhoDoArray; i++) {
            if (respostas[i] == gabarito[i]){
                contador++;
        }
        }

        System.out.println(contador);
        sc.close();
    }
}
