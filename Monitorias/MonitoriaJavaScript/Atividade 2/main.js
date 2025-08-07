/*O inverno é uma estação maravilhosa, não é mesmo? 
Todos nós amamos vestir um casaco bonito, assistir 
um filme debaixo das cobertas, tomar um chocolate 
quente… Mas nem todos gostam do inverno, especialmente 
em lugares onde o inverno costuma ser muito cruel. 
Em Westeros, por exemplo, o humor das pessoas é definido 
de acordo com as tendências climáticas. Com base nas 
temperaturas dos três últimos dias, as pessoas podem 
ficar tristes ou felizes, ficando mais propensas a fazer 
guerra ou fazer amor, respectivamente. */

let tempDiaUm = prompt("Digite a temperatura do dia um")
let tempDiaDois = prompt("Digite a temperatura do dia dois")
let tempDiaTres = prompt("Digite a temperatura do dia tres")
/*Se a temperatura desceu do 1º para o 2º dia, mas subiu ou permaneceu 
constante do 2º para o 3º, as pessoas ficam felizes. */
if (tempDiaUm - tempDiaDois > 0 && tempDiaDois - tempDiaTres < 0 || tempDiaDois == tempDiaTres){
    alert(":)")
}
/*Se a temperatura subiu do 1º para o 2º dia, mas desceu ou permaneceu 
constante do 2º para o 3º, as pessoas ficam tristes. */
else if (tempDiaUm - tempDiaDois < 0 && tempDiaDois - tempDiaTres > 0 || tempDiaDois == tempDiaTres){
    alert(":(")
}
/*Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu 
do 2º para o 3º menos do que subira do 1º para o 2º, as pessoas ficam tristes. */
else if (tempDiaUm - tempDiaDois < 0 && tempDiaDois - tempDiaTres < 0 && tempDiaTres - tempDiaDois < tempDiaDois - tempDiaUm ){
    alert(":(")
}
/*Se a temperatura subiu do 1º para o 2º dia e do 2º para o 3º, mas subiu do 
2º para o 3º no mínimo o tanto que subira do 1º para o 2º, as pessoas ficam 
felizes. */
else if (tempDiaUm - tempDiaDois < 0 && tempDiaDois - tempDiaTres < 0 && tempDiaTres - tempDiaDois >= tempDiaDois - tempDiaUm ){
    alert(":)")
}
/*Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu 
do 2º para o 3º menos do que descera do 1º para o 2º, as pessoas ficam felizes. */
else if (tempDiaUm - tempDiaDois > 0 && tempDiaDois - tempDiaTres > 0 && tempDiaDois - tempDiaTres < tempDiaUm - tempDiaDois){
    alert(":)")
}
/*Se a temperatura desceu do 1º para o 2º dia e do 2º para o 3º, mas desceu do 
2º para o 3º no mínimo o tanto que descera do 1º para o 2º, as pessoas ficam tristes. */
else if (tempDiaUm - tempDiaDois > 0 && tempDiaDois - tempDiaTres > 0 && tempDiaDois - tempDiaTres >= tempDiaUm - tempDiaDois){
    alert(":(")
}
/*Se a temperatura permaneceu constante do 1º para o 2º dia, as pessoas ficam felizes 
se subiu do 2º para o 3º dia ou tristes caso contrário. */
else if (tempDiaUm == tempDiaDois && tempDiaDois - tempDiaTres < 0){
    alert(":)")
}
else if (tempDiaUm == tempDiaDois && tempDiaDois - tempDiaTres > 0){
    alert(":(")
}