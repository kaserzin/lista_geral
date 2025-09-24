# Escreva um programa que leia o número inteiro positivo e 
# calcule o seu dobro, o seu  triplo, o seu quadrado, o seu cubo e a sua raiz quadrada
from math import sqrt
numero = int(input("Informe um valor positivo: "))
if numero <= 0:
    print("Numero invalido!")
else:
    print(f"O numero informado foi: {numero}\nO dobro é: {numero*2}\nO triplo é: {numero*3}\nO quadruplo é: {numero**2}\nO cubo é: {numero**3}\nA raiz quadrada é: {sqrt(numero)}")