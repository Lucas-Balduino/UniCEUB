package FigurasGeometricas.Entidades.Forma;

import FigurasGeometricas.Entidades.FiguraGeometrica;

public class Circulo extends FiguraGeometrica{
    public String nome = "Triangulo";
    public double raio;

    public double calcArea(){
        return 3.1415 * raio * raio; 
    }
    public double calcPerimetro(){
        return 2 * 3.1415 * raio;
    }
}