package FigurasGeometricas.Entidades.Forma;

import FigurasGeometricas.Entidades.FiguraGeometrica;

public class Quadrado extends FiguraGeometrica {
    public String nome = "Triangulo";
    public double lado;

    public double calcArea(){
        return lado * lado;
    }
    public double calcPerimetro(){
        return lado * 4;
    }
}