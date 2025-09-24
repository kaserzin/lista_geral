### Escreva um programa que leia o valor da base e da altura de um triângulo e 
# calcule a  sua área

base = int(input("Informe a base do triangulo: "))
altura = int(input("Informe a altura do triangulo: "))

if base < 0 or altura < 0:
    print("Valor invalido")
else:
    print(f"A base informada foi: {base}cm\nA altura informada foi: {altura}cm\nA areia do triangulo é: {(base*altura)/2}")