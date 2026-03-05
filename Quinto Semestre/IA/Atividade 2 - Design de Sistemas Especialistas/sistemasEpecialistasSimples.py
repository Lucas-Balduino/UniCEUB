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
    { "condicoes": ["web", "design"], "resultado": "Java Script" },
    { "condicoes": ["dados", "IA"], "resultado": "Python" },
    ]

    for interesse in interesses:
        if all(interesse in interesses for interesse in interesse["condicoes"]):
            return interesse["resultado"]
        return "Diagnóstico inconclusivo"
# Teste

entrada = ["web", "design"]
print(diagnostico(entrada)) # Saída: Java Script
print("------------------")