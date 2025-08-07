/*Fazer um programa que leia o número de um funcionário,
seu número de horas trabalhadas, o valor que recebe por 
hora e calcula o salário desse funcionário. A seguir, 
mostre o número e o salário do funcionário, com duas 
casas decimais.*/

let numFuncionario = prompt("Digite o numero de um funcionario")
let horasTrabalhadas = prompt ("Digite o numero de horas trabalhadas pelo funcionario")
let valorHora = prompt("Digite o quanto o funcionario recebe por hora trabalhada")

let salarioFuncionario = horasTrabalhadas * valorHora

alert("O funcionario "+numFuncionario+" recebeu um salario de R$"+salarioFuncionario)