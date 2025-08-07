package InstrumentosMusicais.Entidade.InstrumentosMusicais;

import InstrumentosMusicais.Entidade.InstrumentoMusical;

public class Flauta implements InstrumentoMusical{
    public void tocarNota(){
        System.out.println("Voce está tocando flauta! ...uma cobra aparece e danca...");
    }

    public void afinar(){
        System.out.println("Voce esta afinando seu piano! ...barulho agudo feio...");
    }

}
