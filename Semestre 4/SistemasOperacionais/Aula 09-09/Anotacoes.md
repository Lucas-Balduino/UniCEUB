# Gerenciamento de Memoria

## Funcoes
 - Controlar quais unidades de memoria estao ou nao em uso
 - Liberar as unidades de memoria que foram desocupadas por um processo que finalizou
 - Tratar do Swapping entre emmoria principal e memoria segundarias (Swap, espaco de memoria dedicado para armazenar programas que viraram processos na memoria RAM caso esteja cheia, processador nao consegue acessa-lo)

## Memoria Logia e memoria fisica
 - **Memoria Logica**: é aquela que o processo "enxerga", sao manipulados pelos processos
 - **Memoria Física**: Implementada pelos circuitos integrados de memoria, enderecos fisicos correspondem a uma posicao rela de memoria (ponteiro)