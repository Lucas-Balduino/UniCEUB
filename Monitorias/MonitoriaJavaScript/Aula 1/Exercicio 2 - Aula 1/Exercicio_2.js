/*Leia os quatro valores correspondentes aos eixos 
x e y de dois pontos quaisquer no plano, p1(x1,y1) 
e p2(x2,y2) e calcule a distância entre eles, mostrando 
4 casas decimais após a vírgula, segundo a fórmula:
Distância = 
*/

let x1 = prompt("Digite o valor do x do ponto 1")
let y1= prompt("Digite o valor do y do ponto 1")
let x2= prompt("Digite o valor do x do ponto 2")
let y2 = prompt("Digite o valor do y do ponto 2")

let distancia = sqrt(pow(x2 - x1)+ pow(y2 - y1))

alert("A distancia do ponto com coordenada "+x1+" e "+y1+" do ponto com coordenada "+x2+" e "+y2+" é:" +distancia)