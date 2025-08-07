/*Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente,
de modo que o lado A representa o maior dos 3 lados. A seguir, realize uma 
função para cada um dos tipos e determine o tipo de triângulo que estes três 
lados formam, com base nos casos indicados na imagem:*/

function ordenadorDeTresValores(A,B,C){
    let suporte
    if (B > A) {
        suporte = A
        A = B
        B = suporte
    }
    if (C > A) {
        suporte = A
        A = C
        C = suporte
    }
    if (C > B) {
        suporte = B
        B = C
        C = suporte
    }
    return [A,B,C]
}

function tiposDeTriangulo(A,B,C){
    if(A >= B + C){
        alert("NAO FORMA TRIANGULO")
    }
    else if((A * A) == (B * B) + (C * C)){
        alert("TRIANGULO RETANGULO")
    }
    else if((A * A) > (B * B) + (C * C)){
        alert("TRIANGULO OBTUSANGULO")
    }
    else if((A * A) < (B * B) + (C * C)){
        alert("TRIANGULO ACUTANGULO")
    }
    if(A == B && A == C){
        alert("TRIANGULO EQUILATERO")
    }
    else if(A == C || A == B || B == C){
        alert("TRIANGULO ISOSCELES")
    }
}

let A = prompt("Digite um valor 'A'");
let B = prompt("Digite um valor 'B'");
let C = prompt("Digite um valor 'C'");

[A ,B, C] = ordenadorDeTresValores(A,B,C)

alert("Os valores ordenados em ordem decrescente fica: "+ A +" "+ B +" "+ C)

tiposDeTriangulo(A,B,C)
