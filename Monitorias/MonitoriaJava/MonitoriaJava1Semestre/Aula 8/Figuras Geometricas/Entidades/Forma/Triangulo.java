package FigurasGeometricas.Entidades.Forma;

import FigurasGeometricas.Entidades.FiguraGeometrica;

public class Triangulo extends FiguraGeometrica{
    public String nome = "Triangulo";
    public double lado;
    public double altura; 

    public double calcArea(){
        return lado * altura;
    }
    public double calcPerimetro(){
        return (lado * 3);
    }
}
