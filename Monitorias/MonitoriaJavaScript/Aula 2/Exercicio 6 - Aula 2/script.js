/*Faça um programa que retorna a hora que 
for digitada e cumprimente de acordo com o horário. */

let horario = prompt("Digite a hora atual:")

if (horario >= 0 && horario< 6){
    alert("Agora são "+ horario+" horas. Boa Madrugada")
}
else if (horario >= 6 && horario< 12){
    alert("Agora são "+ horario+" horas. Bom Dia")
}
else if (horario >= 12 && horario< 18){
    alert("Agora são "+ horario+" horas. Boa Tarde")
}
else if (horario >= 18 && horario< 24){
    alert("Agora são "+ horario+" horas. Boa Noite")
}