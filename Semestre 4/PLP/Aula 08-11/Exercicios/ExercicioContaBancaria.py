# Você vai criar uma classe que representa uma conta
# bancária. Essa classe deve incluir métodos para
# depositar, sacar e verificar o saldo, utilizando
# encapsulamento para proteger os dados internos
# da conta. Além disso, você deve criar uma classe
# que representa um cliente, associando-o a uma
# conta bancária

class ContaBancaria:
    def __init__(self, cliente , saldo):
        self.cliente = cliente
        self._saldo = saldo

    def depositar(self, deposito):
        print("Depositando...")
        self._saldo += deposito
    
    def sacar(self, saque):
        print("Sacando")
        if (self._saldo >= saque): 
            self._saldo -= saque
        else:
            print("Saldo Insuficiente")
    
    def verificarSaldo(self):
        print("Verificando o saldo")
        print("O seu saldo é de: "+ self._saldo)

class Cliente:
    def __init__(self, nome, idade, cpf):
        self.__nome = nome
        self.__idade = idade
        self.__cpf = cpf
    
    def getNome(self):
        return self.__nome
    
    def getIdade(self):
        return self.__idade
    
    def getCpf(self):
        return self.__cpf

Cliente1 = Cliente("Lucas", 20, "123456789-10")

contaLucas = ContaBancaria(Cliente1, 100)

print(contaLucas.cliente.getNome())

