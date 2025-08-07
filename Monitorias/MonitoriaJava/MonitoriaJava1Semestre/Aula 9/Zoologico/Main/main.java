package Zoologico.Main;

import java.util.Locale;
import java.util.Scanner;

import Zoologico.Entidades.Animais.Ave;
import Zoologico.Entidades.Animais.Mamiferos;
import Zoologico.Entidades.Animais.Reptil;

/*Crie uma hierarquia de classes para representar 
diferentes tipos de animais em um zoológico. A classe 
base deve ser Animal, com atributos como nome e idade. 
Em seguida, crie subclasses como Mamifero, Ave e Reptil, 
cada uma com atributos específicos e métodos relacionados. */

public class main {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);
        
        Mamiferos x = new Mamiferos();

        System.out.println("Digite o nome desse Mamifero");
        x.nome = sc.next();
        
        System.out.println("Digite a idade desse Mamifero");
        x.idade = sc.nextInt();
        
        System.out.println("Digite a quantidade de pelos desse Mamifero");
        x.numDePelos = sc.nextInt();
        
        Ave y = new Ave();
        
        System.out.println("Digite o nome desse Ave");
        y.nome = sc.next();
        
        System.out.println("Digite a idade desse Ave");
        y.idade = sc.nextInt();
        
        System.out.println("Digite o tempo de voo dessa Ave");
        y.tempoDeVoo = sc.nextInt();
        
        Reptil z = new Reptil();

        System.out.println("Digite o nome desse Reptil");
        z.nome = sc.next();
        
        System.out.println("Digite a idade desse Reptil");
        z.idade = sc.nextInt();
        
        System.out.println("Digite a quantidade de Escamas desse Reptil");
        z.numDeEscamas = sc.nextInt();

        x.comer();
        y.comer();
        z.comer();
        
        sc.close();
    
    }
    
}
