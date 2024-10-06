import json

with open('dados.json', 'r') as file:
    data = json.load(file)

def valor(item):
    return item["valor"]

data = sorted(data, key=valor)

# Menor valor
print(f'O menor valor é ${data[0]["valor"]}')
# Maior valor
print(f'O maior valor é ${data[len(data)-1]["valor"]}')

# Media
media = 0
# Dias uteis
dias = 0
for x in range(len(data)):
    faturamento = data[x]['valor']
    if(faturamento > 0.0): 
        media += faturamento
        dias = dias +1
    
media = media / dias

# Dias que o faturamento foi maior que media
for x in range(len(data)):
    if data[x]['valor'] > media:
        print(data[x]['dia'])


