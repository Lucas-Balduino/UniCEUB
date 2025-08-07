package InstrumentosMusicais.Main;

import java.util.Locale;
import java.util.Scanner;

import InstrumentosMusicais.Entidade.InstrumentoMusical;
import InstrumentosMusicais.Entidade.InstrumentosMusicais.Flauta;
import InstrumentosMusicais.Entidade.InstrumentosMusicais.Piano;
import InstrumentosMusicais.Entidade.InstrumentosMusicais.Violao;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Locale.setDefault(Locale.US);

        InstrumentoMusical x = new Piano();
        InstrumentoMusical y = new Flauta();
        InstrumentoMusical z = new Violao();

        x.tocarNota();
        x.afinar();
        y.tocarNota();
        y.afinar();
        z.tocarNota();
        z.afinar();

        sc.close();
    }
}
