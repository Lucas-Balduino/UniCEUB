# Dados Fixos do Problema
preco_concorrencia = 7.00
custo_massa = 1.30
custo_recheio = 2.00
custo_processo_unitario = 0.40
custo_fixo = 6000.00

# Custo variável total por unidade de pastel
custo_unitario = custo_massa + custo_recheio + custo_processo_unitario

def calcular_cenario(preco_pastel):
    # Demanda em função do preço
    demanda = 15000 - 5000 * preco_pastel + 5000 * preco_concorrencia
    
    # Se a demanda for zero ou negativa, não há vendas
    if demanda <= 0:
        return 0, 0, -custo_fixo
        
    receita = preco_pastel * demanda
    custo_total = (custo_unitario * demanda) + custo_fixo
    lucro = receita - custo_total
    
    return demanda, receita, lucro

# --- Otimização via Busca em Grade (Grid Search) ---
melhor_preco_lucro = 0
maior_lucro = float('-inf')
melhor_demanda = 0
melhor_receita = 0

# Testando preços de R$ 0.00 até R$ 10.00 em passos de R$ 0.05
passo = 0.05
for i in range(0, 201):
    preco_atual = i * passo
    demanda, receita, lucro = calcular_cenario(preco_atual)
    
    if lucro > maior_lucro:
        maior_lucro = lucro
        melhor_preco_lucro = preco_atual
        melhor_demanda = demanda
        melhor_receita = receita

# Exibição dos Resultados
print("--- RESULTADO DA OTIMIZAÇÃO DE LUCRO ---")
print(f"Preço Ideal do Pastel: R$ {melhor_preco_lucro:.2f}")
print(f"Demanda Estimada:      {melhor_demanda:.0f} unidades")
print(f"Receita Total:         R$ {melhor_receita:.2f}")
print(f"Lucro Máximo Obting:   R$ {maior_lucro:.2f}")