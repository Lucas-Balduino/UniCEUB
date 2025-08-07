/*Solicite ao usuário uma string e substitua todas as ocorrências de uma letra por outra informada pelo usuário. */

function substituirLetra (string, letraNova, letraAntiga){
    return string.replace(RegExp(letraAntiga, 'g'), letraNova)
}

let string= prompt("Digite uma string")
let letraAntiga= prompt("Digite a letra que deseja substituir")
let letraNova= prompt("Digite a letra que deseja no lugar da antiga")

alert("A string "+string+" com a letra '"+letraAntiga+"' substituida pela letra '"+letraNova+"' fica:"+substituirLetra(string, letraNova, letraAntiga))