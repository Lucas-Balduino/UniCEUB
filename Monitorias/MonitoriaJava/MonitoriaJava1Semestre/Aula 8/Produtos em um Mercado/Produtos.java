package ProdutosEmUmMercado.Entidades;

public class Produtos {
    public String nome;
    public double preco;
    public int quantidadeEmEstoque;
    public int adicao;
    public int retirada;

    public int adicionar(int quantidadeEmEstoque, int adicao){
        return quantidadeEmEstoque += adicao;
    }

    public int retirar(int quantidadeEmEstoque, int retirada){
        return quantidadeEmEstoque -= retirada;
    }

    public void valorTotal(int quantidadeEmEstoque){
        System.out.println("A quantidade de "+nome+" em estoque é "+ quantidadeEmEstoque);
    }
}
