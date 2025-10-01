## Resolução Lista de Exercicios
### Lista 1: Estatística descritiva, probabilidade eprobabilidade condicional.
### Lucas Gonçalves Balduino | 22409139

#### 1.
Uma sala fez uma prova com 5 questões e número de acertos de cada estudante
foi contado e armazenado em uma lista. Considere esse conjunto de dados abaixo
para responder as perguntas.

𝑑𝑎𝑑𝑜𝑠 = [0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 3, 5, 2, 2, 3, 3, 2, 3, 2, 2,3]

a. Faça a distribuição de frequência desses dados (em forma de tabela)

| n  | f(n) |
| :- | ---: |
| 0  |    2 |
| 1  |    4 |
| 2  |   10 |
| 3  |    8 |
| 4  |    3 |
| 5  |    3 |

\begin{table}[h]
\centering
\begin{tabular}{c r}
\hline
$n$ & $f(n)$ \\
\hline
0 & 2 \\
1 & 4 \\
2 & 10 \\
3 & 8 \\
4 & 3 \\
5 & 3 \\
\hline
\end{tabular}
\caption{Distribuição de frequência dos acertos}
\end{table}


b. Com os dados de a. calcule a média

x* = ((0 * 2) + (1 * 4) + (2 * 10) + (3 * 8) + (4 * 3) + (5 * 3)) / 30 = 75 / 30 = 2,5

\[
\bar x=\frac{\sum n\cdot f(n)}{N}
=\frac{0\cdot2+1\cdot4+2\cdot10+3\cdot8+4\cdot3+5\cdot3}{30}
=\frac{75}{30}=2{,}5.
\]


c. Com os dados de a. e b. calcule a variância

v* = ((2,5 - 0)² * 2 + (2,5 - 1)² * 4 + (2,5 - 2)² * 10 + (2,5 - 3)² * 8 + (2,5 - 4)² * 3 + (2,5 - 5)² * 3) / 30 =  103 / 60

\[
\sigma^2=\frac{\sum (n-\bar x)^2 f(n)}{N}
=\frac{(2{,}5-0)^2\cdot2+(2{,}5-1)^2\cdot4+(2{,}5-2)^2\cdot10+(2{,}5-3)^2\cdot8+(2{,}5-4)^2\cdot3+(2{,}5-5)^2\cdot3}{30}
=\frac{103}{60}\approx 1{,}716666\ldots
\]

d. Com os dados de c. calcule o desvio padrão

o* = sqrt((2,5 - 0)² * 2 + (2,5 - 1)² * 4 + (2,5 - 2)² * 10 + (2,5 - 3)² * 8 + (2,5 - 4)² * 3 + (2,5 - 5)² * 3 / 30) = sqrt(103/60)

\[
\sigma=\sqrt{\sigma^2}=\sqrt{\frac{103}{60}}\approx 1{,}3102162671.
\]

e. Qual é a moda desse conjunto de dados?

Moda é 2, maior frequencia entre os dados

\[
\text{Moda} = 2 \quad\text{(maior frequência = 10).}
\]

f. Qual é a mediana desse conjunto de dados

Mediana é 2, a frequencia acumulada na metade dos dados 15 - 16 está dentro da frequencia acumulada do 2

\[
\text{Mediana} = 2 \quad\text{(N = 30 par; 15º e 16º termos ordenados são ambos 2).}
\]

g. Se todas as outras frequências permanecessem iguais, precisaríamos de
quantos estudantes obtendo nota 4 para que a média da turma fosse igual a 3?
(Nesse caso, a turma teria uma quantidade diferente de estudantes)

x* = ((0 * 2) + (1 * 4) + (2 * 10) + (3 * 8) + (4 * n) + (5 * 3)) / 27 + n  = 3 
63 + 4n = 81 + 3n 
n = 18

\[
\text{Soma fixa} = 0\cdot2+1\cdot4+2\cdot10+3\cdot8+5\cdot3 = 63,\qquad N_{\text{fix}}=27.
\]
Queremos
\[
\frac{63+4n}{27+n}=3 \Rightarrow 63+4n=3(27+n)=81+3n \Rightarrow n=18.
\]
\[
N' = 27+18 = 45.
\]

h. No cenário do item g., calcule a nova variância e o novo desvio padrão

v* = ((3 - 0)² * 2 + (3 - 1)² * 4 + (3 - 2)² * 10 + (3 - 3)² * 8 + (3 - 4)² * 18 + (3 - 5)² * 3) / 45 = 74 / 45

o* = sqrt(((3 - 0)² * 2 + (3 - 1)² * 4 + (3 - 2)² * 10 + (3 - 3)² * 8 + (3 - 4)² * 18 + (3 - 5)² * 3) / 45) = sqrt(74/45)

\[
\sigma'^2=\frac{(3-0)^2\cdot2+(3-1)^2\cdot4+(3-2)^2\cdot10+(3-3)^2\cdot8+(3-4)^2\cdot18+(3-5)^2\cdot3}{45}
=\frac{74}{45}\approx 1{,}644444\ldots
\]
\[
\sigma'=\sqrt{\frac{74}{45}}\approx 1{,}2823589374.
\]

#### 2.
Encontre uma base de dados, na internet, contendo pelo menos 4 colunas e mais
de 100 linhas. Essa base precisa ter, pelo menos, uma coluna com dados
qualitativos nominais, qualitativos ordinais, quantitativos discretos, quantitativos
contínuos. Coloque abaixo o link da base de dados encontrada e classifique 4 das
colunas com a classificação dada acima.

https://www.kaggle.com/c/titanic/data

| Coluna   | Tipo de dado              | Comentário                                                |
| -------- | ------------------------- | --------------------------------------------------------- |
| `Sex`    | qualitativa **nominal**   | “male” / “female” — categorias sem ordem inerente         |
| `Pclass` | qualitativa **ordinal**   | classes 1, 2, 3 com ordem (1 é melhor que 2, etc.)        |
| `SibSp`  | quantitativa **discreta** | número de irmãos/cônjuges — valor inteiro contado         |
| `Age`    | quantitativa **contínua** | idade (quando não faltante) pode assumir valores decimais |

#### 3.
Em quais situações o gráfico de pizza é indicado a ser usado e quando não é?

O gráfico de pizza é indicado para situações onde não há muitas categorias com variaveis qualitativas, mostrando a relação delas com o total atravez de frequencia absoluta ou relativa.

#### 4.
Uma senha de um dado sistema, com 8 caracteres, exige que haja pelo menos duas
letras (uma maiúscula e uma minúscula) e números. Calcule quantas senhas
diferentes esse sistema pode ter, sabendo que as letras e os números não podem
ser repetidos. Mostre suas contas.

(26 * 26 * 60 * 59 * 58 * 57 * 56 * 55) * 8 * 7
Senhas (Obrigatoria Maiúscula, Obrigatoria minuscula, Caracteres sem repeticao) + permutação das letras obrigatorias

\[
N = 8\cdot7\cdot26\cdot26\cdot\prod_{k=0}^{5}(60-k)
=8\cdot7\cdot26^2\cdot(60\cdot59\cdot58\cdot57\cdot56\cdot55)
=1\,364\,556\,588\,595\,200.
\]

#### 5.
O mesmo do anterior, mas é permitido repetir letras e números.

62⁸ - 2 * 36⁸ + 10⁸
Senhas (Caracteres com repeticao) - Casos de Maiúsculas + Numero, Casos de Minúsculas + Numero + Exclusoes das Interseccoes 

\[
N = 62^8 - 2\cdot 36^8 + 10^8,
\]
onde
\[
62^8 = 218\,340\,105\,584\,896,\quad 36^8 = 2\,821\,109\,907\,456,\quad 10^8 = 100\,000\,000.
\]
Portanto
\[
N = 218\,340\,105\,584\,896 - 2\cdot 2\,821\,109\,907\,456 + 100\,000\,000
= 212\,697\,985\,769\,984.
\]

#### 6.
Em uma conversa após uma prova, todos estudantes da conversa relataram acertar
3 das 5 questões, mas nenhum deles tinha acertado as mesmas questões dos
colegas de conversa. Calcule quantos estudantes participavam dessa conversa.

P(5,3) = 5! / 3!*(5-3)! = 5 * 4 * 3 * 2 * 1 / 3 * 2 * 2 = 10

\[
\binom{5}{3}=\frac{5!}{3!\,2!}=\frac{120}{6\cdot2}=10.
\]
\[
\text{Número de estudantes} = 10.
\]

#### 7.
No lançamento de dois dados, uma dupla de amigos jogadores – chamados de A
e B - disputava quem iria vencer. Para o primeiro obter 1 ponto, a soma dos dois
dados teria que ser divisível por 5. Para o segundo obter 1 ponto, a soma teria que
ser um número par maior que 7. Caso a soma não fosse divisível por 5 ou não
fosse par maior que 7, então nenhum ponto seria dado. Vence que tiver mais ponto
naquele lançamento. Em um único lançamento dos dois dados, calcule:

a. A probabilidade do primeiro obter 1 ponto.

P(A) = 7 / 36

b. A probabilidade do segundo obter 1 ponto

P(B) = 9 / 36

c. A probabilidade do primeiro vencer.

P(A - P(A inter B)) = 4 /36

d. A probabilidade do segundo vencer.

P(B - P(A inter B)) = 6 / 36

e. A probabilidade de um deles vencer.

P(A U B) = 16 / 36

f. A probabilidade de ter um empate.

P(A inter B) = 3 / 36

g. A probabilidade do primeiro ter obtido ponto, sabendo que o segundo obteve
ponto.

P(A|B) = P(A inter B) / P(B)

P(A|B) = (3 / 36) / (9 / 36) 

h. A probabilidade do segundo ter obtido ponto, sabendo que o primeiro obteve
ponto.

P(B|A) = P(A inter B) / P(A)

P(B|A) = (3 / 36) / (7 / 36)

i. A probabilidade do segundo vencer, sabendo que o primeiro não obteve
ponto.



j. Os eventos de A e B são eventos mutuamente exclusivos? Justifique sua
resposta.
k. Os eventos A e B são independentes? Justifique sua resposta.
