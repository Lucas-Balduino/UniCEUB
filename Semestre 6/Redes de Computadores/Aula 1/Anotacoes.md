Atividades -> Cisco Network Academy (https://www.netacad.com/courses/networking-basics?courseLang=pt-BR&instance_id=0593ca68-9566-4f0f-abf1-abe2822dc00f) 
Software Laboratório -> Cisco Packet Tracer



Rede Pública    |   Rede Privada
             Gateway
    ISP         |     CEUB (AS)
Gateway -> Conexão da Rede Privada com a rede pública

*DNS* -> Domain Naming Sistem - Sistema de nome de Domínio

*IPV4* -> O do Google é 8.8.8.8 (Proprietário na rede pública)
     -> Funciona em 32 bits
     -> 4.3 bilhoes de IP's
    
    Rede  Host Máscara
|----^----||     |
192.168.10.2  / 24

*IPV6* -> Criado na limitação de numero de IP's IPV4
     -> 128 bits (Quantidade gigantesca de IPS)
     -> Pública - "2000" | Privada - "fe80"



**Modelo de Camadas**
07 -> *Aplicação*    \
06 -> *Apresentação*  > TCP/IP -> 05
05 -> *Secção*       /
04 -> *Transporte*
03 -> *Rede* - Roteador
02 -> *Enlasse de Dados* - Switch (Endereços MAC), Endereço de Destino
01 -> *Física* - Cabeamento e Rede Wireless

**Protocolos**
ICMP -> PING Protocolo de teste comunicação com servidores

**Classes de Mascara de Sub-rede** -> Definir a classe e o host
A -> 255.0.0.0
B -> 255.255.0.0
C -> 255.255.255.0
