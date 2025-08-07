/*Com base na tabela ao lado, escreva um programa que leia
o código de um item e a quantidade deste item. A seguir, 
calcule e mostre o valor da conta a pagar. */

alert(
  "1 - Cachorro quente R$4.00 \n2 - X-Salada R$4.50\n3 - X-Bacon R$5.00\n4 - Torrada simples R$2.00\n5 - Refrigerante R$1.50"
);

let idProduto = prompt("Digite o id do item desejado:");

let quantidadeProduto;
let preco;

if (idProduto == 1) {
  preco = 4;
  quantidadeProduto = prompt("Digite a quantidade de cachorro quente");
} else if (idProduto == 2) {
  preco = 4.5;
  quantidadeProduto = prompt("Digite a quantidade de X-Salada");
} else if (idProduto == 3) {
  preco = 5;
  quantidadeProduto = prompt("Digite a quantidade de X-Bacon");
} else if (idProduto == 4) {
  preco = 2;
  quantidadeProduto = prompt("Digite a quantidade de Torrada Simples");
} else if (idProduto == 5) {
  preco = 1.5;
  quantidadeProduto = prompt("Digite a quantidade de Refrigerante");
} else if (idProduto > 5 || idProduto < 1) {
  alert("Codigo Invalido");
}
let total = quantidadeProduto * preco;
alert("O total a ser pago é: R$" + total);
