**Pacote de dados**
É uma unidade básica de informação que viaja por uma rede.
Cada Informação enviada para a internet é quebrada em partes menores chamadas pacotes.

Cada Pacote tem:
- Parte do conteúdo -> Dados
- Enfereço de Origem -> IP de origem
- Enfereço de Destino -> IP de destino
- Informações de controle -> Porta, numero de sequencia (Qual parte do fragmento da informação), tipo de protocolo.

No cabeçalho do pacote contem informações para segurança e roteamento:
- Versão: IPv4 ou IPv6  
- TTL: Um prazo de validade para o pacote, indica a quantidade de vezes que um pacote pode passar por um roteador, se chegar a 0 o pacote é  descartado
- Protocolo: Indica o conteúdo (TCP, UDP, ICMP)
- Endereços IP: Origem e destino, endereço 32 bits 

A aparencia de um pacote de dados, se baseia no modelo de camadas (OSI), em que cada camada adiciona uma camada de informações (Processo de encapsulamento), até que os dados brutos se tornem prontos para viajar pela rede.

**Pacotes** \
- Videos     |
- Audios      > Modelo de camadas (OSI)
- Textos     |
- Imagens   /

**Modelo de camadas (OSI)**
Composto por 7 camadas:
- 07  \
- 06   > Compatível á camada 5 (TCP/IP)
- 05  /
- 04
- 03
- 02
- 01

**Processo de Montagem**
- 07 -> Aplicação: Mensagem "Olá" 
- 06 -> Transporte: Mensagem ganha um cabeçalho TCP (com as portas de comunicação)
- 05 -> Rede: Segmento ganha o cabeçalho IP (Endereços de internet). *Formaçao do Pacote em si*
- 04 -> Enlace: Pacote ganha o cabeçalho Ethernet (Endereço físico MAC da placa de rede)
- 03
- 02
- 01


Objetivo das redes de computadores é permitir a comunicação com qualidade

Foma antiga:
    Comutação circuitos -> Internet discadas
    Comutação de pacotes -> Internet atual

HUB -> Switch

**Portas de comunicação em RC**
Na analogia que o Endereço IP é o número do prédio (destino final), as Portas são os números dos apartamentos individuais dentro desse prédio.
É um ponto lógico final de uma conexão, identificando para qual programa ou serviço um pacote de dados sera entregue.
Porta 443 -> Padrão HTTPS

Categorias:
65.535 Portas disponíveis
0 - 1023 -> Portas conhecidas, reservadas para serviços universais (HTTPS,FTP,SSH)
1024 - 49151 -> Portas registradas, utilizadas por empresas para softwares específicos (como banco de dados SQL)
49152 - 65535 -> Portas dinâmicas/temporárias, abertas pelo PC para comunicações rápidas.