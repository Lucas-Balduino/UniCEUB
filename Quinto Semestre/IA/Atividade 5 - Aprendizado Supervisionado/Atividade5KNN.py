import math
from collections import Counter

def distanciaEuclidiana(pontoA, pontoB):
    somatorio = 0
    for xA, xB in zip(pontoA, pontoB):
        somatorio += (xA - xB) ** 2
    return math.sqrt(somatorio)

def distanciaEntrePontos(mapaDeVetores, rotulosVetores, pontoDeConsulta, quantidadeVizinhos):
    listaDistancias = []
    
    for ponto, rotulo in zip(mapaDeVetores, rotulosVetores):
        listaDistancias.append((distanciaEuclidiana(ponto, pontoDeConsulta), rotulo))
    
    listaDistanciasOrdenada = sorted(listaDistancias)
    
    return listaDistanciasOrdenada[:quantidadeVizinhos]

def funcaoKNN(mapaDeVetores, rotulosVetores, quantidadeVizinhos, pontoConsulta):
    
    if quantidadeVizinhos % 2 == 0:
        quantidadeVizinhos -= 1
        
    k_vizinhos = distanciaEntrePontos(mapaDeVetores, rotulosVetores, pontoConsulta, quantidadeVizinhos)
    
    rotulos_k_vizinhos = []
    for distancia, rotulo in k_vizinhos:
        rotulos_k_vizinhos.append(rotulo)
        
    contagem_votos = Counter(rotulos_k_vizinhos)
    
    vencedor = contagem_votos.most_common(1)[0][0]
    
    return vencedor

# Dados de exemplo: [Idade Normalizada, Renda Normalizada]
clientes_banco = [
    [0.2, 0.3], 
    [0.8, 0.9], 
    [0.3, 0.4], 
    [0.7, 0.8]  
]

rotulos_clientes = ["Aprovado", "Reprovado", "Aprovado", "Reprovado"]

novo_cliente = [0.25, 0.35]

resultado = funcaoKNN(clientes_banco, rotulos_clientes, 3, novo_cliente)

print(f"O novo cliente foi classificado como: {resultado}")