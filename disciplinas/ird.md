## [[251104]]

    meios de tranmissão
            elementos fisicos ou tecnologicos usados para transmitir dados entre dispositivos

            podem ser 
                guiados 
                    cabos de cobre
                        v: eco, bom desempenho em distacias curtas, facil de instalar 
                        d: maior interferncia  externa,
                        menor velociadade em distancias maiores.
                    cabos coaxiais 
                        v:menos interferncia externa 
                        maior velociadade em distancia maiores
                        d: custo alto, ainda vuneralvel a distacia
                    fibras ópticas
                        v: menor interferecias das três,
                        suporta mais distancia das três
                        d:instalçao dmais cara

                nao guiados
                    ondas de radio(wireless)
                        v:mobilidade, instalaçao rapida e pratica e perfeito para locais de dificil acesso
                        d:vuneravel quanto a segunrança
                        menor velocidae que a fibra
                        inteferencia por obstaculos
            
            Serve para facicilitar comunicaçao de dados, voz, video garantindo eficiencia e segurança seja em redes locais (LANs), metropolitanas (MANs) ou de longa distancia (WANs).

        tipologia de rede
            nós ligados entre si seguindo regras hierarquicas.

            serve para expandir sem custo mantendo desempenho nos nós mais trafegados.
            d:atraso por passagem de intermedios, depende da herarquia.














## [[251111]]

    Simulador de redes Cisco Packet Tracer
        Realização de exercicios em Packet Tracer (attach):
            1) Estrela_Hub
            2) Estrela_Switch

## [[251118]]

        Teste treino

Redes e Comunicações 1 – Teste de Treino (Sem Consulta)
                            I

1.1 – Indica as principais características das redes que formam a Internet, usando o modelo OSI como base.
        As redes seguem camadas que se dividem em:
        Física (meios), Enlace (MAC/erros), Rede (endereços IP e rotas), Transporte (TCP/UDP), Aplicação (serviços como web, email).

1.2 – Indica os meios de transmissão que podem ser usados numa rede de computadores. Refere também as vantagens de utilizar transmissão sem fios.
        
        Cabo de par trançado (UTP), Cabo coaxial, Fibra ótica, Rádio/Wi-Fi, Micro-ondas e Satélite.
        v: Mobilidade, Instalação rápida, Flexibilidade e Não precisa de cabos

                            II

Os protocolos definem regras de comunicação e diferentes funcionalidades.

2.1 – Explica os motivos pelos quais, nas redes atuais, a comutação por pacotes é mais usada do que a comutação por circuitos.

        Maior eficiência, tolerância a falhas e Reduz custos.

2.2 – Indica três razões pelas quais as mensagens enviadas pelos terminais precisam ser divididas em partes menores antes de serem transmitidas pela rede.

        -A rede tem limites de tamanho (MTU), então mensagens grandes precisam ser divididas.
        -Se houver erro, só se retransmite a parte afetada e não a mensagem inteira.
        -Facilita o encaminhamento e o transporte dos dados pela rede.

                            III

As redes Wi-Fi são redes sem fios de cobertura local.

3.1 – Descreve de forma simples a arquitetura (elementos de rede) e o funcionamento das redes Wi-Fi estruturadas.

        Elementos:
            AP (Access Point)
            Dispositivos clientes (STA)
             Router e rede interna

        Funcionamento:
            Os dispositivos ligam-se ao AP.
            O AP liga a rede sem fios à rede com fios.
            O AP gere autenticação, canais e envio/receção de dados.

3.2 – Explica o problema do “terminal escondido” e como o protocolo CSMA/CA consegue resolver esta situação nas redes Wi-Fi.

        Problema: dois dispositivos não se conseguem “ver” um ao outro e enviam ao mesmo tempo, causando colisões no AP.

        CSMA/CA:
            Verifica o canal antes de enviar.
            Usa tempos de espera (backoff).
            Pode usar RTS/CTS para reservar o canal e evitar colisões.














