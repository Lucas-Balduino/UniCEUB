/*Uma operadora de telefonia cobra R$ 50.00 por um plano básico que dá direito 
a 100 minutos de telefone. Cada minuto que exceder a franquia de 100 minutos 
custa R$ 2.00. Fazer um programa para ler a quantidade de minutos que uma pessoa 
consumiu, daí mostrar o valor a ser pago. */

let minutosConsumidos = prompt("Digite a quantidade de minutos ultilizados")
let total
if (minutosConsumidos > 100){
    minutosConsumidos -= 100
    total = (minutosConsumidos * 2) + 50
}
else {
    total = 50
}

alert("O total a ser pago esse mes é R$"+ total.toFixed(2))