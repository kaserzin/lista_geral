###Escreva um programa que leia dois números inteiros a e b e determine o maior
# múltiplo de a que é menor ou igual a b. Por exemplo, o maior múltiplo de 3 menor ou
# igual a 50 é 48.

a = int(input("Informe o numero A: "))
b = int(input("Informe o numero B: "))
maior = int(b/a)
print(f"O maior mutiplo de {a} que e menor que {b} é: {a*maior}")