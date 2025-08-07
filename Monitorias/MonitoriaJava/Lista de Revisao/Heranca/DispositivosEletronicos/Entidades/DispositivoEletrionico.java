package DispositivosEletronicos.Entidades;

/*Crie uma hierarquia de classes para
representar diferentes tipos de dispositivos
eletrônicos. A classe base deve ser 
DispositivoEletronico, com atributos como
marca e anoFabricacao. Em seguida, crie
subclasses como Smartphone, Tablet e Notebook
,cada uma com atributos específicos e métodos relacionados. */

public class DispositivoEletrionico {
    public String marca;
    public int anoFabricacao;

    public void ligar(){
        System.out.println("O dispositivo da marca "+ marca +" fabricado no ano "+ anoFabricacao +" ligou");
    }
}