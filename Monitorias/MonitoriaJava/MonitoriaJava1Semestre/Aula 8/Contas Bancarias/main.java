package ExercicioContasBancarias.main;
import java.util.Locale;
import java.util.Scanner;

import ExercicioContasBancarias.Entidades.contaBancaria;

/*Crie uma classe ContaBancaria que represente 
uma conta bancária básica. Ela deve ter atributos
como numero, saldo e titular. Implemente métodos
para depositar, sacar e verificar o saldo da conta.*/

public class main {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        contaBancaria x = new contaBancaria();

        int escolha;

        System.out.println("Digite o numero da conta");
        x.numero = sc.nextInt();
        
        System.out.println("Digite o saldo da sua conta:");
        x.saldo = sc.nextDouble();        

        System.out.println("Indique o titular da conta:");
        x.titular = sc.next();
        
        do{
            System.out.println("Digite o numero relacionado a operção bancaria que deseja (1- Depositar, 2- Sacar, 3-Verificação)");
            escolha = sc.nextInt();
    
            switch (escolha) {
                case 1:
                    System.out.println("Digite o valor do deposito");
                    x.deposito = sc.nextDouble();
                    x.saldo = x.depositar(x.saldo, x.deposito);
                    System.out.println("O seu saldo apos o deposito é: "+x.saldo);
                    break;
                case 2:
                    System.out.println("Digite o valor do saque");
                    x.saque = sc.nextDouble();
                    x.saldo = x.sacar(x.saldo, x.saque);
                    System.out.println("O seu saldo apos o saque é: "+x.saldo);
                    break;
                case 3:
                    x.verificar(x.saldo);
                    break;
                
                default:
                    System.out.println("Nenhuma opção escolhida");
                    break;
            }
            System.out.println("Voce deseja realizar outra operação? (Responda com 1 para sim ou 0 para nao)");
            int continuar = sc.nextInt();
            if (continuar == 1) {
                escolha = 10;
            }

        }
        while(escolha > 3 || escolha <= 0);
        
        sc.close();
    }
    
}
