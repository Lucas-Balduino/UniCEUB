# Resumo

## Partes de um SO
 - Núcleo (Kernel ou "executivo")
   - Gerenciador de processo -> Supervisao e execucao de programas
     - Escalonador (Scheduler) -> Organiza os processos em partes para 
     roda-los um de cada vez e evitar o deadlock, prioriza arquivos pequenos 
     em caso de mais de um programa rodando ao mesmo tempo.
     - Sincronizacao de processos -> Simula a execucao simultanea de processos
   - Gerenciador de arquivo -> Rotina de criação, salvamento, exclusao, renome do arquivo 
   - Gerenciador de memória -> 
   - Gerenciador de dispositivos
 - Shell
 - Utilitários e Aplicativos
 - MicroKernel -> Roda Funcionalidades Adicionais nao cobridas pelo Kernel
 
## Níveis de Máquina
- Nivel 0 -> Hardware: Dispositivos físicos, microprogramação, linguagem de máquina
- Nivel 1 -> Sistema Operacional