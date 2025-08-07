/*Fazer um programa para ler um número inteiro positivo N. 
O programa deve então mostrar na tela N linhas, começando 
de 1 até N. Para cada linha, mostrar o número da linha, 
depois o quadrado e o cubo do valor, conforme exemplo. */

let numero = prompt("Digite um numero")

for(let i = 1; i <= numero; i++){
    alert(i +" "+ i * i +" "+ i * i * i)
}
