## Resolução Lista de Exercicios
### Lista 1: Estatística descritiva, probabilidade eprobabilidade condicional.
### Lucas Gonçalves Balduino | 22409139


** 1. Uma sala fez uma prova com 5 questões e número de acertos de cada estudante
foi contado e armazenado em uma lista. Considere esse conjunto de dados abaixo
para responder as perguntas.**

𝑑𝑎𝑑𝑜𝑠 = [0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 3, 5, 2, 2, 3, 3, 2, 3, 2, 2,3]

**a. Faça a distribuição de frequência desses dados (em forma de tabela)**

| n  | f(n) |
| :- | ---: |
| 0  |    2 |
| 1  |    4 |
| 2  |   10 |
| 3  |    8 |
| 4  |    3 |
| 5  |    3 |

**b. Com os dados de a. calcule a média**

x* = ((0 * 2) + (1 * 4) + (2 * 10) + (3 * 8) + (4 * 3) + (5 * 3)) / 30 = 75 / 30 = 2,5

**c. Com os dados de a. e b. calcule a variância**

v* = ((2,5 - 0)² * 2 + (2,5 - 1)² * 4 + (2,5 - 2)² * 10 + (2,5 - 3)² * 8 + (2,5 - 4)² * 3 + (2,5 - 5)² * 3) / 30 =  103 / 60

**d. Com os dados de c. calcule o desvio padrão**

o* = sqrt((2,5 - 0)² * 2 + (2,5 - 1)² * 4 + (2,5 - 2)² * 10 + (2,5 - 3)² * 8 + (2,5 - 4)² * 3 + (2,5 - 5)² * 3 / 30) = sqrt(103/60)

**e. Qual é a moda desse conjunto de dados?**

Moda é 2, maior frequencia entre os dados

**f. Qual é a mediana desse conjunto de dados**

Mediana é 2, a frequencia acumulada na metade dos dados 15 - 16 está dentro da frequencia acumulada do 2

**g. Se todas as outras frequências permanecessem iguais, precisaríamos de
quantos estudantes obtendo nota 4 para que a média da turma fosse igual a 3?
(Nesse caso, a turma teria uma quantidade diferente de estudantes)**

x* = ((0 * 2) + (1 * 4) + (2 * 10) + (3 * 8) + (4 * n) + (5 * 3)) / 27 + n  = 3 
63 + 4n = 81 + 3n 
n = 18

**h. No cenário do item g., calcule a nova variância e o novo desvio padrão**

v* = ((3 - 0)² * 2 + (3 - 1)² * 4 + (3 - 2)² * 10 + (3 - 3)² * 8 + (3 - 4)² * 18 + (3 - 5)² * 3) / 45 = 74 / 45

o* = sqrt(((3 - 0)² * 2 + (3 - 1)² * 4 + (3 - 2)² * 10 + (3 - 3)² * 8 + (3 - 4)² * 18 + (3 - 5)² * 3) / 45) = sqrt(74/45)

** 2. Encontre uma base de dados, na internet, contendo pelo menos 4 colunas e mais
de 100 linhas. Essa base precisa ter, pelo menos, uma coluna com dados
qualitativos nominais, qualitativos ordinais, quantitativos discretos, quantitativos
contínuos. Coloque abaixo o link da base de dados encontrada e classifique 4 das
colunas com a classificação dada acima.**

https://www.kaggle.com/c/titanic/data

| Coluna   | Tipo de dado              | Comentário                                                |
| -------- | ------------------------- | --------------------------------------------------------- |
| `Sex`    | qualitativa **nominal**   | “male” / “female” — categorias sem ordem inerente         |
| `Pclass` | qualitativa **ordinal**   | classes 1, 2, 3 com ordem (1 é melhor que 2, etc.)        |
| `SibSp`  | quantitativa **discreta** | número de irmãos/cônjuges — valor inteiro contado         |
| `Age`    | quantitativa **contínua** | idade (quando não faltante) pode assumir valores decimais |


** 3. Em quais situações o gráfico de pizza é indicado a ser usado e quando não é?**

O gráfico de pizza é indicado para situações onde não há muitas categorias com variaveis qualitativas, mostrando a relação delas com o total atravez de frequencia absoluta ou relativa.


** 4. Uma senha de um dado sistema, com 8 caracteres, exige que haja pelo menos duas
letras (uma maiúscula e uma minúscula) e números. Calcule quantas senhas
diferentes esse sistema pode ter, sabendo que as letras e os números não podem
ser repetidos. Mostre suas contas.**

(26 * 26 * 60 * 59 * 58 * 57 * 56 * 55) * 8 * 7
Senhas (Obrigatoria Maiúscula, Obrigatoria minuscula, Caracteres sem repeticao) + permutação das letras obrigatorias

**5. O mesmo do anterior, mas é permitido repetir letras e números.**

62⁸ - 2 * 36⁸ + 10⁸
Senhas (Caracteres com repeticao) - Casos de Maiúsculas + Numero, Casos de Minúsculas + Numero + Exclusoes das Interseccoes 

**6. Em uma conversa após uma prova, todos estudantes da conversa relataram acertar
3 das 5 questões, mas nenhum deles tinha acertado as mesmas questões dos
colegas de conversa. Calcule quantos estudantes participavam dessa conversa.**

P(5,3) = 5! / 3!*(5-3)! = 5 * 4 * 3 * 2 * 1 / 3 * 2 * 2 = 10

**7. No lançamento de dois dados, uma dupla de amigos jogadores – chamados de A
e B - disputava quem iria vencer. Para o primeiro obter 1 ponto, a soma dos dois
dados teria que ser divisível por 5. Para o segundo obter 1 ponto, a soma teria que
ser um número par maior que 7. Caso a soma não fosse divisível por 5 ou não
fosse par maior que 7, então nenhum ponto seria dado. Vence que tiver mais ponto
naquele lançamento. Em um único lançamento dos dois dados, calcule:**

**a. A probabilidade do primeiro obter 1 ponto.**

P(A) = 7 / 36

**b. A probabilidade do segundo obter 1 ponto**

P(B) = 9 / 36

**c. A probabilidade do primeiro vencer.**

P(A - P(A inter B)) = 4 /36

**d. A probabilidade do segundo vencer.**

P(B - P(A inter B)) = 6 / 36

**e. A probabilidade de um deles vencer.**

P(A U B) = 16 / 36

**f. A probabilidade de ter um empate.**

P(A inter B) = 3 / 36

P(A U B c) = 23 / 36

P(E) = 26 / 36

**g. A probabilidade do primeiro ter obtido ponto, sabendo que o segundo obteve ponto.**

P(A|B) = P(A inter B) / P(B)

P(A|B) = (3 / 36) / (9 / 36)

**h. A probabilidade do segundo ter obtido ponto, sabendo que o primeiro obteve ponto.**

P(B|A) = P(A inter B) / P(A)

P(B|A) = (3 / 36) / (7 / 36)

**i. A probabilidade do segundo vencer, sabendo que o primeiro não obteve ponto.**

P(B | Ac) = (9/36) / (29/36) = 6 / 29

**j. Os eventos de A e B são eventos mutuamente exclusivos? Justifique sua resposta.**

Não. Eventos mutuamente exclusivos nunca ocorrem juntos; existe a interseção (soma 10), logo não são mutuamente exclusivos.

**k. Os eventos A e B são independentes? Justifique sua resposta.**

Não, P(A inter B) = 3/36 != P(A) * P(B) = 7/36 * 9/36 = 63 / 1296


** 8. Em uma fábrica de parafusos, as máquinas A, B e C produzem 25, 35 e 40% do 
total produzido, respectivamente. Da produção de cada máquina, 5, 4 e 2%, 
respectivamente, são parafusos defeituosos. Escolhe-se ao acaso um parafuso e se 
verifica ser defeituoso. Qual será a probabilidade de que o parafuso venha da 
máquina A? Da B? Da C? **

P(D) = 0,05 * 25 + 0,04 * 35 + 0,02 * 40 = 0,0345

P(A|D) = (0,25 * 0,05) / 0,035 = 0,0125 / 0,035

P(B|D) = (0,35 * 0,04) / 0,035 = 0,014 / 0,035

P(C|D) = (0,4 * 0,02) / 0,035 = 0,008 / 0,035

#### Organizacao e codigos em Latex feitos com chat GPT