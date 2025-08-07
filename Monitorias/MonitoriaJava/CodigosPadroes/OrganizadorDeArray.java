import java.util.Scanner;

//Faça um algoritmo que leia três números inteiros e mostre a soma entre eles.
public class OrganizadorDeArray {
//    public static int[] criaArray(int tamanhoDoArray, int[] listaDeNumeros) {
//        Scanner sc = new Scanner(System.in);
//
//        System.out.println("Digite a quantidade de numeros a serem organizados: ");
//        tamanhoDoArray = sc.nextInt();
//
//        listaDeNumeros = new int[tamanhoDoArray];
//
//        //For para preencher o Array
//
//        for (int i = 0; i < tamanhoDoArray; i++){
//            System.out.println("Digite o numero da posição "+i +": ");
//            listaDeNumeros[i] = sc.nextInt();
//        }
//
//        return listaDeNumeros;
//    }
//
//    public static void mostraArray(int tamanhoDoArray, int[] listaDeNumeros) {
//        System.out.println("A lista dos numero digitados é");
//        for (int i = 0; i < tamanhoDoArray; i++){
//            System.out.println(listaDeNumeros[i]);
//        }
//    }
//
//    public static int [] oraganizaArrayEmOrdemCrescente(int tamanhoDoArray, int[] listaDeNumeros) {
//        for (int i = 0; i < tamanhoDoArray; i++){
//            for (int j = i + 1; j < tamanhoDoArray; j++){
//                if (listaDeNumeros[i] > listaDeNumeros[j]){
//                    int aux = listaDeNumeros[i];
//                    listaDeNumeros[i] = listaDeNumeros[j];
//                    listaDeNumeros[j] = aux;
//                    break;
//                }
//            }
//        }
//        return listaDeNumeros;
//    }
//
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//
//        System.out.println("Digite a quantidade de numeros a serem organizados: ");
//        int tamanhoDoArray = sc.nextInt();
//
//        int[] listaDeNumeros = new int[tamanhoDoArray];
//
//        criaArray(tamanhoDoArray, listaDeNumeros);
//        mostraArray(tamanhoDoArray, listaDeNumeros);
//        listaDeNumeros = oraganizaArrayEmOrdemCrescente(tamanhoDoArray, listaDeNumeros);
//        mostraArray(tamanhoDoArray, listaDeNumeros);
//    }
//}

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Digite a quantidade de numeros a serem organizados: ");
        int tamanhoDoArray = sc.nextInt();

        int listaDeNumeros [] = {};

        listaDeNumeros = new int[tamanhoDoArray];

        //For para preencher o Array

        for (int i = 0; i < tamanhoDoArray; i++){
            System.out.println("Digite o numero da posição "+i +": ");
            listaDeNumeros[i] = sc.nextInt();
        }

        System.out.println("A lista dos numero digitados é");
        for (int i = 0; i < tamanhoDoArray; i++){
            System.out.println(listaDeNumeros[i]);
        }

        for (int i = 0; i < tamanhoDoArray; i++){
            for (int j = i + 1; j < tamanhoDoArray; j++){
                if (listaDeNumeros[i] > listaDeNumeros[j]){
                    int aux = listaDeNumeros[i];
                    listaDeNumeros[i] = listaDeNumeros[j];
                    listaDeNumeros[j] = aux;
                }
            }
        }

        System.out.println("A lista dos numero digitados organizados de forma crescente é");
        for (int i = 0; i < tamanhoDoArray; i++){
            System.out.println(listaDeNumeros[i]);
        }
        sc.close();
    }
}