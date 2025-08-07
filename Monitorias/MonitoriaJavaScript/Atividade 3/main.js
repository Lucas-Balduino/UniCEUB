/*Ler um número inteiro N e calcular todos os seus divisores.*/

function acharDivisor(numero){
    for (let i = 0; i <= numero; i++){
        if(numero % i == 0){
            alert(i)
        }
    }
}

let numero = prompt("Digite um numero para achar seus divisores:")

acharDivisor(numero)