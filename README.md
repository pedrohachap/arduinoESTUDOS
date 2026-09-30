# arduinoESTUDOS
estudos de projeot arduino e eletronica

# 00 - Ligar/desligar LED com dois botões (INPUT_PULLUP)

Primeiro projeto de estudo com Arduino Uno: um botão liga o LED e outro desliga.

## Materiais
- 1 Arduino Uno
- 1 protoboard
- 2 push buttons
- 1 LED
- 1 resistor (valor: 330 Ω)
- 7 jumpers

## Ligações
| Componente | Pino / conexão |
|---|---|
| Botão LIGAR | D2 e GND |
| Botão DESLIGAR | D3 e GND |
| LED (ânodo, via resistor) | D8 |
| LED (cátodo, perna curta) | GND |

O GND do Arduino vai para a trilha de terra (−) da protoboard, e os botões e o LED usam essa trilha.

## Como funciona
Os botões usam `INPUT_PULLUP`: o resistor interno do Arduino mantém o pino em nível alto, e ao apertar o botão o pino vai para GND (nível baixo). Por isso não precisa de resistor externo nos botões.
- Botão em D2 pressionado: LED acende.
- Botão em D3 pressionado: LED apaga.

## Como usar
1. Monte o circuito conforme a tabela.
2. Abra o arquivo `.ino` no Arduino IDE.
3. Selecione a placa Arduino Uno e grave.

## O que aprendi
- Diferença entre entrada com pull-up e com pull-down.
- Lógica invertida: botão pressionado = LOW.
- Por que o LED precisa de resistor em série.
