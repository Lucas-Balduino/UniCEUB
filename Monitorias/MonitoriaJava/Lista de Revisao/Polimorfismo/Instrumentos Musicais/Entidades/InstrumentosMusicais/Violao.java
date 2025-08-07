package InstrumentosMusicais.Entidade.InstrumentosMusicais;

import InstrumentosMusicais.Entidade.InstrumentoMusical;

public class Violao implements InstrumentoMusical{
    public void tocarNota(){
        System.out.println("Voce está tocando violao! ...Asa branca esta tocando no fundo...");
    }

    public void afinar(){
        System.out.println("Voce esta afinando seu violao! ...uma corda estora...");
    }

}
