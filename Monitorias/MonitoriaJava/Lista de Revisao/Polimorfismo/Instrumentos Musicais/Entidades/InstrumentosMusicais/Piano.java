package InstrumentosMusicais.Entidade.InstrumentosMusicais;

import InstrumentosMusicais.Entidade.InstrumentoMusical;

public class Piano implements InstrumentoMusical{
    public void tocarNota(){
        System.out.println("Voce está tocando piano! ...Mozart tocando de fundo...");
    }

    public void afinar(){
        System.out.println("Voce esta afinando seu piano! ...barulho estranho...");
    }
}
