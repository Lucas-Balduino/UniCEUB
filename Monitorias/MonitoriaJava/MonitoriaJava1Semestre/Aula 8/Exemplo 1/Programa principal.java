import java.util.Locale;
import java.util.Scanner;

/*public class Exemplo_1_Aula_8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        Double lado1X, alturaX, lado1Y, alturaY, areaX, areaY;

        System.out.println("Digite a medida do lado 1 do triangulo X");
        lado1X = sc.nextDouble();
        
        System.out.println("Digite a medida da altura do triangulo X");
        alturaX = sc.nextDouble();
        
        System.out.println("Digite a medida do lado 1 do triangulo Y");
        lado1Y = sc.nextDouble();
        
        System.out.println("Digite a medida da altura do triangulo Y");
        alturaY= sc.nextDouble();

        areaX = lado1X * alturaX / 2;
        
        areaY = lado1Y * alturaY / 2;
        
        System.out.println(areaX);
        
        System.out.println(areaY);

        if (areaX > areaY){
            System.out.println("Area do triangulo X é a maior");
        }
        
        if (areaX < areaY){
            System.out.println("Area do triangulo Y é a maior");
        }
        else{
            System.out.println("As areas sao iguais");   
        }
        sc.close();
    }
    
}*/
public class Exemplo_1_Aula_8 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        triangulo x = new triangulo();
        triangulo y = new triangulo();
        System.out.println("Digite a base do triangulo x");
        x.base = sc.nextDouble();
        System.out.println("Digite a altura do triangulo x");
        x.altura = sc.nextDouble();

        System.out.println("Digite a base do triangulo y");
        y.base = sc.nextDouble();
        System.out.println("Digite a altura do triangulo y");
        y.altura = sc.nextDouble();

        x.area = x.calcArea(x.base, x.altura);
        y.area = y.calcArea(y.base, y.altura);

        if (x.area > y.area) {
            System.out.println(" A area x e maior que a area y");
        }
        
        if (x.area < y.area) {
            System.out.println(" A area y e maior que a area x");
        }
        sc.close();
    }
}
