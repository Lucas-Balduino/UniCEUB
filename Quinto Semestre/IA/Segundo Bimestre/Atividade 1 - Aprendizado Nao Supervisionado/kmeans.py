import numpy as np
import matplotlib.pyplot as plt

def kmeans(X, K, maxItereacoes=100):
    # 1. Inicialização: Escolhe K pontos aleatórios como centroides iniciais
    indices = np.random.choice(len(X), K, replace=False)
    centroides = X[indices]
    
    for i in range(maxItereacoes):
        # 2. Atribuição: Calcula distância Euclidiana e usa argmin
        # (Distância entre cada ponto e cada centroide)
        distancias = np.array([np.linalg.norm(X - c, axis=1) for c in centroides])
        labels = np.argmin(distancias, axis=0)
        
        # Guardamos os centroides antigos para verificar a parada
        centroides_antigos = centroides.copy()
        
        # 3. Atualização: Move o centroide para a média do seu grupo
        for k in range(K):
            pontos_do_grupo = X[labels == k]
            if len(pontos_do_grupo) > 0:
                centroides[k] = pontos_do_grupo.mean(axis=0)
        
        # 4. Critério de Parada: Convergência
        if np.all(centroides_antigos == centroides):
            break
            
    return centroides, labels

# Exemplo de uso para o seu relatório:
N = 300
X = np.random.rand(N, 2) # N pontos aleatórios em 2D
K_ideal = 3 # Você pode testar diferentes valores

centros, grupos = kmeans(X, K_ideal)

# Visualização
plt.scatter(X[:, 0], X[:, 1], c=grupos, cmap='viridis', alpha=0.5)
plt.scatter(centros[:, 0], centros[:, 1], c='red', marker='X', s=200, label='Centroides')
plt.legend()
plt.show()