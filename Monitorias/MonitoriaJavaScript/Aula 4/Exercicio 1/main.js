/*Faça uma função que aceita 2 inteiros e retorna a multiplicação */

function multiply (num1, num2){
    return num1 * num2
}

let num1 = prompt("Digite um numero:")
let num2 = prompt("Digite outro numero:")
let result = multiply(num1,num2)
alert("O resultado da multiplicação de "+num1+" e "+num2+" é "+result)