package ProdutosEmUmaLoja.Entidades;

public class Produto {
    public String nome;
    public double preco;

    public void comprado(String nome, double preco){
        System.out.println("O produto "+nome+" com preco "+preco+" foi comprado!");
    }
}
