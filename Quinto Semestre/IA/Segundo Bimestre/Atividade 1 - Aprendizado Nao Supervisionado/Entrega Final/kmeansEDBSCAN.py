import numpy as np
import matplotlib.pyplot as plt
from sklearn import datasets
from sklearn.cluster import KMeans, DBSCAN

# 1. Geração dos 3 Conjuntos de Dados (Situações)
n_amostras = 500

# Dataset 1: Blobs (Agrupamentos globulares/esféricos)
X_blobs, _ = datasets.make_blobs(n_samples=n_amostras, centers=3, cluster_std=0.6, random_state=42)

# Dataset 2: Moons (Formato de duas luas entrelaçadas)
X_moons, _ = datasets.make_moons(n_samples=n_amostras, noise=0.05, random_state=42)

# Dataset 3: Circles (Círculos concêntricos)
X_circles, _ = datasets.make_circles(n_samples=n_amostras, factor=0.5, noise=0.05, random_state=42)

datasets_dict = {
    "Blobs (Grupos Esféricos)": X_blobs,
    "Moons (Luas Entrelaçadas)": X_moons,
    "Circles (Círculos Concêntricos)": X_circles
}

# 2. Definição dos Hiperparâmetros
# Para o K-means, o hiperparâmetro principal é o n_clusters (K)
kmeans_params = [3, 2, 2] 

# Para o DBSCAN, os hiperparâmetros são eps (raio de vizinhança) e min_samples (mínimo de pontos)
dbscan_params = [
    {'eps': 0.5, 'min_samples': 5},  # Para Blobs
    {'eps': 0.2, 'min_samples': 5},  # Para Moons
    {'eps': 0.2, 'min_samples': 5}   # Para Circles
]

# 3. Execução e Plotagem
fig, axes = plt.subplots(3, 2, figsize=(12, 12))
plt.subplots_adjust(hspace=0.4)

for i, (nome_dataset, X) in enumerate(datasets_dict.items()):
    # Aplicação do K-means
    kmeans = KMeans(n_clusters=kmeans_params[i], random_state=42, n_init=10)
    y_kmeans = kmeans.fit_predict(X)
    
    # Aplicação do DBSCAN
    dbscan = DBSCAN(eps=dbscan_params[i]['eps'], min_samples=dbscan_params[i]['min_samples'])
    y_dbscan = dbscan.fit_predict(X)
    
    # Plot K-means
    axes[i, 0].scatter(X[:, 0], X[:, 1], c=y_kmeans, cmap='viridis', s=30)
    axes[i, 0].set_title(f'K-means - {nome_dataset}\n(K={kmeans_params[i]})')
    
    # Plot DBSCAN
    # Pontos com label -1 são considerados "ruído" (outliers) pelo DBSCAN
    axes[i, 1].scatter(X[:, 0], X[:, 1], c=y_dbscan, cmap='plasma', s=30)
    axes[i, 1].set_title(f'DBSCAN - {nome_dataset}\n(eps={dbscan_params[i]["eps"]}, min_samples={dbscan_params[i]["min_samples"]})')

plt.show()