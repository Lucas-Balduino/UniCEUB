package ExercicioContasBancarias.Entidades;

public class contaBancaria {
    public int numero;
    public double saldo;
    public String titular;
    public double deposito;
    public double saque;

    public double depositar(double saldo, double deposito){
        saldo += deposito;
        return saldo;
    }
    public double sacar(double saldo, double saque){
        saldo -= saque;
        return saldo;
    }
    public void verificar(double saldo){
        System.out.println("Seu saldo é"+saldo);
    }
}
