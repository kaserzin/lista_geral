### Escreva um programa que leia o valor do seno de um ângulo e calcule o valor do seu
# cosseno.
from math import sqrt

seno = float(input("Informe o valor do seno: "))
print(f"Com o seno valendo {seno} o cosseno vale: {(sqrt(1-seno*seno))}")