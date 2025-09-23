### Escreva um programa que leia os valores de dois ângulos internos de um triângulo e 
# calcule o valor do terceiro ângulo.

angulo1 = int(input("Informe o primeiro angulo: "))
angulo2 = int(input("Informe o segundo angulo: "))

if (angulo1 + angulo2) >= 180:
    print("Valores dos angulos invalidos!")
else:
    print(f"O triangulo possue 180º, sabendo que o angulo 1 vale {angulo1} e o angulo 2 vale {angulo2} o angulo 3 vale {180 - (angulo2+angulo1)}")