### Escreva um programa que leia uma palavra e um número inteiro k e identifique a k-
# ésima letra da palavra informada pelo usuário.

palavra = str(input("Insira uma palavra: "))
numero = int(input("Informe um número: "))
if numero > len(palavra):  
    print("Valor informado e maior que a palavra.")
else:
    print(f"A {numero}º letra da palavra: {palavra} é {palavra[numero-1]}")