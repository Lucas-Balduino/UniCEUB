import java.util.Scanner;
class HelloWorld {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = 1, contador = -1, soma = 0;
        double media = 0;
        
        System.out.println("Digite uma sequencia de numeros para realizar a media deles(insira 0 para parar)");
        
        while (x != 0){
            x = sc.nextInt();
            contador++;
            soma += x;
        }
        media = media(soma,contador);
        System.out.println("A media dos numeros inseridos e : "+media);
        sc.close();
    }
    public static double media(int soma, int contador){
        double resultado;
        resultado = (double)soma / (double)contador;
        return resultado;
    }
}
