def encontrar_caminhos(grafo,origem,destino):
    """
    Encontra todos os caminhos simples entre origem e destino.
    Um caminho simples não repete vértices.
    """
    caminhos = []

    def dfs (atual,caminho): 

        # Chegou ao destino
        if atual == destino:
            caminhos.append(caminho.copy())
            return

        for vizinho in grafo[atual]:
            #Caminho nao pode repetir vertices
            if vizinho not in caminho:
                caminho.append(vizinho)

                dfs(
                    vizinho,
                    caminho
                )

                # Backtracking
                caminho.pop()
    dfs(origem,[origem])
    return caminhos

#================================================

def encontrar_trilhas(grafo, origem, destino):
    """
    Encontra todas as trilhas entre origem e destino.

    Uma trilha nao pode repetir arestas, 
    mas pode repetir vértices.
    """
    trilhas = []

    def dfs(atual, trilha, arestas_usadas):

        # Chegou ao destino

        if atual == destino:
            trilhas.append(trilha.copy())
            return
        
        for vizinho in grafo[atual]:
            # Como o grafo é não direcionado:
            # A-B e B-A representam a mesma aresta
            aresta = tuple(sorted((atual,vizinho)))

            #A trilha não pode repetir arestas
            if aresta not in arestas_usadas:

                arestas_usadas.add(aresta)

                trilha.append(vizinho)

                dfs(
                    vizinho,
                    trilha,
                    arestas_usadas
                )

                # Backtracking
                trilha.pop()

                arestas_usadas.remove(aresta)

    dfs(
        origem,
        [origem],
        set()
    )
    
    return trilhas

#================================================
# EXEMPLO DE GRAFO
#================================================

# grafo = {
#     'A': ['B','C','D','E'],

#     'B': ['A','C','D','E'],
    
#     'C': ['A','B','D','E'],
    
#     'D': ['A','B','C','E'],
    
#     'E': ['A','B','C','D'],
# }

grafo = {
    'A': ['B','C','D','E'],

    'B': ['A','C','D','E'],
    
    'C': ['A','B','D','E'],
    
    'D': ['A','B','C','E'],
    
    'E': ['A','B','C','D'],
}

#================================================
# ORIGEM E DESTINO
#================================================

origem = 'A'
destino = 'E'

#================================================
# CAMINHOS
#================================================

caminhos = encontrar_caminhos(
    grafo,
    origem,
    destino
)

print("\nCAMINHOS:")
print("-" *40)

for i, caminho in enumerate(caminhos, start=1):
    print(
        f"Caminho {i}: "
        + " -> ".join(caminho)
    )

#================================================
# TRILHAS
#================================================

trilhas = encontrar_trilhas(
    grafo,
    origem,
    destino
)

print("\nTRILHAS:")
print("-" *40)

for i, trilha in enumerate(trilhas, start=1):
    print(
        f"Trilha {i}: "
        + " -> ".join(trilha)
    )
