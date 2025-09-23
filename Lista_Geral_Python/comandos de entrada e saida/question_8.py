### Escreva um programa que leia o valor de uma temperatura em Celsius e calcule o seu  
# valor correspondente em Fahrenheit e em Kelvin.

celsius = float(input("Informe a temperatura em graus Celsius: "))
print(f"A temperatura informada foi: {celsius:.2f}º C\nA temperatura em Fahrenheit é: {((celsius*1.8)+32):.2f}ºF\nA temperatura em Kelvin é: {celsius + 273.15}K")