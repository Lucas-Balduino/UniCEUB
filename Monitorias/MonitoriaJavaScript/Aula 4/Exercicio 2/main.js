/*Faça uma função que receba um inteiro e mostre na tela se ele for múltiplo de 2.(Utilizando return) */

function multiploDeDois (number){
    if (number % 2 == 0){
        return alert(number+" é multiplo de dois!")
    }
    else{
        return alert(number+" não é multiplo de dois!")
    }
}

let number = prompt("Digite um numero para ver se ele é multiplo de dois:")

multiploDeDois(number)