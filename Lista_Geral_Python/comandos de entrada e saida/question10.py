### Escreva um programa que leia o valor dos dois catetos de um
# triângulo retângulo e  calcule o valor da hipotenusa.
from math import hypot


cateto_oposto = int(input("Insira o valor do cateto oposto: "))
cateto_adjaente = int(input("Insira o valor do cateto adjacente: "))
print(f"O cateto oposto tem valor de: {cateto_oposto}cm\nO cateto adjacente tem valor de: {cateto_adjaente}cm\nA hipotenusa tem valor de: {(hypot(cateto_adjaente, cateto_oposto)):.2f}cm")