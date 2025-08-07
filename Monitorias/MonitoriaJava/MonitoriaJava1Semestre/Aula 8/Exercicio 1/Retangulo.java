package Exercicio_1.Entidades;
import java.lang.Math;

public class retangulo {
    public double largura;
    public double altura;
    public double area;
    public double perimetro;
    public double diagonal;

    public double calcArea(double altura ,double base){
        double area = base * altura;
        return area;
    }

    public double calcPerimetro(double base, double altura){
        double perimetro = base + base + altura + altura;
        return perimetro;
    }
    
    public double calcDiagonal(double base, double altura){
        double diagonal = Math.sqrt(Math.pow(altura, 2) * Math.pow(base,2));
        return diagonal;
    }
}

