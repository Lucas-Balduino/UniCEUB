def caminho_hamiltoniano(grafo):
    n = len(grafo)

    def backtracking (atual, caminho, visitados):
        # Se todos os vertices foram visitados, encontramos um caminho.
        if len (caminho) == n:
            return caminho[:]
        
        for vizinho in grafo [atual]:
            if vizinho not in visitados:
                visitados.add(vizinho)
                caminho.append(vizinho)

                resultado = backtracking(vizinho, caminho, visitados)

                if resultado:
                    return resultado
                
                # defaz a escolha

                caminho.pop()
                visitados.remove(vizinho)

        return None
    
    #Um caminho Hamiltoniano pode começar em qualquer vértice.
    for inicio in grafo:
        resultado = backtracking(inicio,[inicio],{inicio})

        if resultado:
            return resultado
        
    return None

def ciclo_hamiltoniano(grafo):
    """
    Tenta encontrar um ciclo Hamiltoniano em um grafo nao direcionado.

    Retorna uma lista representando o ciclo, ou None caso não exista.
    """

    n = len(grafo)

    def backtracking (atual, inicio, caminho, visitados):
        # Todos os vertices foram visitados.
        if len (caminho) == n:
            # Para ser ciclo, o último vértice precisa
            # Estar conectado novamento ao primeiro.
            if inicio in grafo[atual]:
                return caminho[:] + [inicio]
            
            return None

        for vizinho in grafo [atual]:
            
            if vizinho not in visitados:
                visitados.add(vizinho)
                caminho.append(vizinho)

                #print(" -> ".join(caminho))

                resultado = backtracking(
                    vizinho,
                    inicio,
                    caminho, 
                    visitados
                )

                if resultado:
                    return resultado
                
                # Backtracking

                caminho.pop()
                visitados.remove(vizinho)

        return None
    
    # Para ciclo Hamiltoniano podemos fixar um vertice inicial,
    # pois qualquer ciclo pode ser rotacionado.
    inicio = next(iter(grafo))

    return backtracking(
        inicio,
        inicio,
        [inicio],
        {inicio}
    )

# ===============================================
#   EXEMPLO
# ===============================================

# Grafo do exemplo discutido e apresentado em sala
# grafo = {
#         "A" : ["B", "E"],
#         "B" : ["A", "C", "D"],
#         "C" : ["B", "D"],
#         "D" : ["B", "C", "E"],
#         "E" : ["A", "D"]
# }

# Grafo biartido K7, 8 para teste

# grafo = {
#         "A1" : ["B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8"],
#         "A2" : ["B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8"],
#         "A3" : ["B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8"],
#         "A4" : ["B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8"],
#         "A5" : ["B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8"],
#         "A6" : ["B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8"],
#         "A7" : ["B1", "B2", "B3", "B4", "B5", "B6", "B7", "B8"],
#         "B1" : ["A1", "A2", "A3", "A4", "A5", "A6", "A7"],
#         "B2" : ["A1", "A2", "A3", "A4", "A5", "A6", "A7"],
#         "B3" : ["A1", "A2", "A3", "A4", "A5", "A6", "A7"],
#         "B4" : ["A1", "A2", "A3", "A4", "A5", "A6", "A7"],
#         "B5" : ["A1", "A2", "A3", "A4", "A5", "A6", "A7"],
#         "B6" : ["A1", "A2", "A3", "A4", "A5", "A6", "A7"],
#         "B7" : ["A1", "A2", "A3", "A4", "A5", "A6", "A7"],
#         "B8" : ["A1", "A2", "A3", "A4", "A5", "A6", "A7"]
# }

# Grafo biartido K10, 8 para teste

grafo = {
        "A" : ["B", "C", "D", "E", "F", "G", "H", "I", "J"],
        "B" : ["A", "C", "D", "E", "F", "G", "H", "I", "J"],
        "C" : ["A", "B", "D", "E", "F", "G", "H", "I", "J"],
        "D" : ["A", "B", "C", "E", "F", "G", "H", "I", "J"],
        "E" : ["A", "B", "C", "D", "F", "G", "H", "I", "J"],
        "F" : ["A", "B", "C", "D", "E", "G", "H", "I", "J"],
        "G" : ["A", "B", "C", "D", "E", "F", "H", "I", "J"],
        "H" : ["A", "B", "C", "D", "E", "F", "G", "I", "J"],
        "I" : ["A", "B", "C", "D", "E", "F", "G", "H", "J"],
        "J" : ["A", "B", "C", "D", "E", "F", "G", "H", "I"],
}

caminho = caminho_hamiltoniano(grafo)
ciclo = ciclo_hamiltoniano(grafo)

if caminho:
    print("Caminho Hamiltoniano:")
    print(" -> ".join(caminho))
else:
    print("Não existe caminho Hamiltoniano.")

if ciclo:
    print("\nCiclo Hamiltoniano:")
    print(" -> ".join(ciclo))
else:
    print("Não existe ciclo Hamiltoniano.")