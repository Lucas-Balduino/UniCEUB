# Triagem Médica
def diagnostico(sintomas):
    regras = [
    { "condicoes": ["febre", "tosse"], "resultado": "Possível Gripe" },
    { "condicoes": ["dificuldade_respiratoria"], "resultado": "Emergencia Médica" },
    ]

    for regra in regras:
        if all(sintoma in sintomas for sintoma in regra["condicoes"]):
            return regra["resultado"]
    return "Diagnóstico inconclusivo"

# Teste

entrada = ["dificuldade_respiratoria"]
print(diagnostico(entrada)) # Saída: Emergencia Médica
entrada = ["tosse","febre"]
print(diagnostico(entrada)) # Saída: Possivel Gripe
print("------------------")

# Diagnóstico TI

def diagnostico(fatos):
    regras = [
    { "condicoes": ["luz_desligada", "luz_vermelha"], "resultado": "Sem Internet" },
    { "condicoes": ["carregamento_lento", "luz_piscando"], "resultado": "Latência Alta" },
    ]

    resultadosPossiveis = []

    for regra in regras:
        if any(fato in fatos for fato in regra["condicoes"]):
            resultadosPossiveis.append(regra["resultado"])
    
    if len(resultadosPossiveis) == 0:
        return "Diagnóstico inconclusivo"
    return resultadosPossiveis

# Teste

entrada = ["luz_desligada", "luz_vermelha"]
print(diagnostico(entrada)) # Saída: Sem Internet
entrada = ["luz_desligada", "carregamento_lento"]
print(diagnostico(entrada)) # Saída: Sem Internet, Latência Alta
entrada = ["luz_piscando", "luz_vermelha"]
print(diagnostico(entrada)) # Saída: Latência Alta, Sem Internet
print("------------------")

# Recomendador de Linguagens

def diagnostico(Interesses):
    interesses = [
    { "pesos": {"web": 2,"front-end": 1}, "resultado": "JavaScript" },
    { "pesos": {"dados": 2,"ia": 1}, "resultado": "Python" },
    { "pesos": {"jogos": 2,"desktop": 1}, "resultado": "C#" },
    ]

    pontuacoes = {"JavaScript": 0, "Python": 0, "C#" : 0}

    for interesse in Interesses:
        for area in interesses: 
            if interesse in area["pesos"]:
                pontuacoes[area["resultado"]] += area["pesos"][interesse]
    
    linguagem = [chave for chave,valor in pontuacoes.items() if valor == max(pontuacoes.values())]
    print(linguagem)
# Teste


entrada_python = ["dados", "ia"]
print(diagnostico(entrada_python)) # Saída: ['Python']


entrada_csharp = ["jogos", "desktop"]
print(diagnostico(entrada_csharp)) # Saída: ['C#']

entrada_empate = ["web", "dados"]
print(diagnostico(entrada_empate)) # Saída: ['JavaScript', 'Python'] (ambos terminam com 2 pontos)

entrada_zero = ["musica", "culinaria"]
print(diagnostico(entrada_zero)) # Saída: ['JavaScript', 'Python', 'C#'] (todos empatam com 0 pontos)