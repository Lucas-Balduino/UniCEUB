package FigurasGeometricas.main;

import java.util.Locale;
import java.util.Scanner;

import FigurasGeometricas.Entidades.FiguraGeometrica;
import FigurasGeometricas.Entidades.Forma.Circulo;
import FigurasGeometricas.Entidades.Forma.Quadrado;
import FigurasGeometricas.Entidades.Forma.Triangulo;

/*Modele uma classe FiguraGeometrica que 
represente uma figura geométrica básica. 
Ela deve ter atributos como nome e métodos
 para calcular a área e o perímetro da figura.
Crie subclasses como Quadrado, Circulo e Triangulo
e implemente os métodos de cálculo de área e perímetro
para cada uma delas. */

public class Main {
      public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        
        int escolha;
        do{
            System.out.println("Digite o numero correspondente com a forma geometrica desejada: (1- Quadrado, 2-Circulo, 3- Retangulo)");
            escolha = sc.nextInt();
            Quadrado x = new Quadrado();
            Circulo y = new Circulo();
            Triangulo z = new Triangulo();

            switch (escolha) {
                case 1:
                    System.out.println("Digite o valor do lado do quadrado");
                    x.lado = sc.nextDouble();
                    System.out.println("O valor da area desse quadrado é "+x.calcArea());
                    System.out.println("O valor do perimetro desse quadrado é "+x.calcPerimetro());
                    
                    break;
            
                case 2:
                    System.out.println("Digite o valor do lado do Circulo");
                    y.raio = sc.nextDouble();
                    System.out.println("O valor da area desse Circulo é "+y.calcArea());
                    System.out.println("O valor do perimetro desse Circulo é "+y.calcPerimetro());
                    break;
            
                case 3:
                    System.out.println("Digite o valor do lado do Triangulo");
                    z.lado = sc.nextDouble();
                    System.out.println("Digite o valor da altura do Triangulo");
                    z.altura = sc.nextDouble();
                    System.out.println("O valor da area desse Triangulo é "+ z.calcArea());
                    System.out.println("O valor do perimetro desse Triangulo é "+z.calcPerimetro());
                    
                    break;
            
                default:
                    break;    
            }

            System.out.println("Escolher outra forma geometrica? (Responda com 1 para sim ou 0 para nao)");
            int continuar = sc.nextInt();
            
            if (continuar == 1) {
                 escolha = 10;
            }
        }
            while(escolha > 3 || escolha <= 0);
    }
}
