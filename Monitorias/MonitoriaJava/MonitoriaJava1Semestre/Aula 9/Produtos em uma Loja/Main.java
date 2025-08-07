package ProdutosEmUmaLoja;

import java.util.Locale;
import java.util.Scanner;

import ProdutosEmUmaLoja.Entidades.Produtos.Eletronicos;
import ProdutosEmUmaLoja.Entidades.Produtos.Livro;
import ProdutosEmUmaLoja.Entidades.Produtos.Roupa;

/*Implemente uma hierarquia de classes para representar 
diferentes tipos de produtos em uma loja online. A classe 
base deve ser Produto, com atributos como nome e preco. 
Em seguida, crie subclasses como Livro, Eletronico e Roupa, 
cada uma com atributos específicos e métodos relacionados. */

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        
        Roupa x = new Roupa();

        
        System.out.println("Digite o nome dessa roupa");
        x.nome = sc.next();
        
        System.out.println("Digite o preco dessa roupa");
        x.preco = sc.nextInt();
        
        System.out.println("Digite o tipo de tecido dessa roupa");
        x.tipoDeTecido = sc.next();
        
        Eletronicos y = new Eletronicos();
        
        System.out.println("Digite o nome desse Eletronico");
        y.nome = sc.next();
        
        System.out.println("Digite o preco desse Eletronico");
        y.preco = sc.nextInt();
        
        System.out.println("Digite a quantidade de componentes desse Eletronico");
        y.quantComponentes = sc.nextInt();
        
        Livro z = new Livro();

        System.out.println("Digite o nome desse Livro");
        z.nome = sc.next();
        
        System.out.println("Digite o preco desse Livro");
        z.preco = sc.nextInt();
        
        System.out.println("Digite quantidade de paginas desse Livro");
        z.quantDePaginas = sc.nextInt();

        x.comprado(x.nome, x.preco);
        y.comprado(y.nome, y.preco);
        z.comprado(z.nome, z.preco);
        
        sc.close();
    }
}
