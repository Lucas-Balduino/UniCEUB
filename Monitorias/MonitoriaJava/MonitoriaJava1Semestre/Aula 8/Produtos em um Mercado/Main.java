package ProdutosEmUmMercado.main;

import java.util.Locale;
import java.util.Scanner;

import ProdutosEmUmMercado.Entidades.*;

/*Crie uma classe Produto que represente um produto em um mercado.
Ela deve ter atributos como nome, preco e quantidade em estoque. 
Implemente métodos para adicionar e remover unidades do estoque
e calcular o valor total em estoque. */

public class Main {
     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        Produtos x = new Produtos();
        
        System.out.println("Digite o nome do produto");
        x.nome = sc.next();
        
        System.out.println("Digite o preco desse produto");
        x.preco = sc.nextDouble();
        
        System.out.println("Digite a quantidade desse produto em estoque");
        x.quantidadeEmEstoque = sc.nextInt();
        
        int escolha;
        
        do{
            System.out.println("Digite o numero relacionado a alteracao que deseja (1- Adicionar, 2- Remover, 3- Verificar)");
            escolha = sc.nextInt();
    
            switch (escolha) {
                case 1:
                    System.out.println("Digite a quantidade desse produto que deseja adicionar ao estoque");
                    x.adicao = sc.nextInt();
                    x.quantidadeEmEstoque = x.adicionar(x.quantidadeEmEstoque, x.adicao);
                    System.out.println("A quantidade de "+ x.nome + "em estoque "+x.quantidadeEmEstoque);
                    break;
                    case 2:
                    System.out.println("Digite a quantidade desse produto que deseja retirar do estoque");
                    x.adicao = sc.nextInt();
                    x.quantidadeEmEstoque = x.retirar(x.quantidadeEmEstoque, x.retirada);
                    System.out.println("A quantidade de "+ x.nome + "em estoque "+x.quantidadeEmEstoque);
                    case 3:
                    x.valorTotal(escolha);
                    break;                
                default:
                    System.out.println("Nenhuma alteracao escolhida");
                    break;
            }
            System.out.println("Voce deseja realizar outra alteracao? (Responda com 1 para sim ou 0 para nao)");
            int continuar = sc.nextInt();
            if (continuar == 1) {
                escolha = 10;
            }

        }
        while(escolha > 3 || escolha <= 0);
        
        sc.close();
    }
    
    
}
