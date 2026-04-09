### Aprendizado Supervisionado
    É um tipo de aprendizado de máquina que possui o treinamento baseado em dados rotulados.

#### Classificação
    Objetivo de classificar os dados em classes gerais (Email é spam ou não).
#### Regressão
    Objetivo de prever um valor numérico (Valor de uma casa com base em seu tamanho).

### KNN (K Nearest Neighbors)
    É um algoritmo de aprendizado supervisionado que utiliza uma métrica em um plano ou espaço de vetores para classificar ou regredir de acordo com a maioria
dos valores de acordo com a distancia de uma quantidade K de vizinhos próximos.
    Seus parâmetros são, a métrica para a distância, a quantidade de vizinhos próximos, o mapa de vetores, os rótulos dos dados e o ponto de consulta.
    Possui como saída uma classificação do ponto de consulta com base nos parâmetros de entrada

### Pseudocódigo

funcaoKNN (mapaDeVetores, rotuloVetores, quantidadeVizinhos, pontoConsulta, metricaDistancia):
    escolha do metodo de distancia (metrica) com base na metricaDistancia

    normalização dos dados para classificacao correta (Escala de 0 a 1)
    
    distanciaEntrePontos(mapaDeVetores,pontoConsulta, quantidadeVizinhos):
        distancia entre ponto de consulta e cada ponto do mapa de vetores
        colecao com os ponto ordenados com proximidade com o pontoConsulta
        
        se empatar a classificacao
            quantidade de vizinhos - 1 até desempatar
        
        return selecao dos K pontos da colecao mais proximos

    classificacaoKpontosMaisProximos = rotuloVetores dos kPontosMaisproximos
    classificacaoKpontosMaisProximos = classificacao em maior quantidade

    return classificacaoKpontosMaisProximos


### Referências

https://www.ibm.com/br-pt/think/topics/knn
