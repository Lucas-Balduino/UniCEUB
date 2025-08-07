package DispositivosEletronicos;

import java.util.Locale;
import java.util.Scanner;

import DispositivosEletronicos.Entidades.Dispositivos.Notebook;
import DispositivosEletronicos.Entidades.Dispositivos.Smartphone;
import DispositivosEletronicos.Entidades.Dispositivos.Tablet;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        Smartphone x = new Smartphone();
        
        System.out.println("Digite a marca do celular");
        x.marca = sc.next();
        
        System.out.println("Digite o ano de fabricacao do celular");
        x.anoFabricacao = sc.nextInt();

        System.out.println("Digite o numero de telefone do celular");
        x.numDeTelefone = sc.nextInt();

        Notebook y = new Notebook();
        
        System.out.println("Digite a marca do Notebook");
        y.marca = sc.next();
        
        System.out.println("Digite o ano de fabricacao do Notebook ");
        y.anoFabricacao = sc.nextInt();

        System.out.println("Digite qual e o processador do Notebook");
        y.processador = sc.next();

        Tablet z = new Tablet();
        
        System.out.println("Digite a marca do Tablet");
        z.marca = sc.next();
        
        System.out.println("Digite o ano de fabricacao do Tablet");
        z.anoFabricacao = sc.nextInt();

        System.out.println("Digite o numero de polegadas do Tablet");
        z.polegadas = sc.nextDouble();

        x.ligar();
        y.ligar();
        z.ligar();

        sc.close();
    }
}
