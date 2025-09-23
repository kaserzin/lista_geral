###  Escreva um programa que leia o valor de uma distância percorrida em km e o tempo 
# gasto em horas e calcule a velocidade média em m/s.

distancia = int(input("Informe a distancia percorrida: "))
tempo = int(input(f"Informe o tempo em que percorreu {distancia}km: "))
print(f"A distacia percorrida foi: {distancia}km\nFoi percorrida em: {tempo}h\nEm uma velocidade de {(distancia / tempo):.1f}km/h\nEm m/s fica: {((distancia / tempo) / 3.6):.2f}m/s")

