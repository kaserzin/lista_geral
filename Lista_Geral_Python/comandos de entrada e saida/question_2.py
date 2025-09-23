### Escreva um programa que leia três números e seus respectivos pesos e 
# calcule a sua  média ponderada.

nota_1 = float(input("Informe a primeira nota: "))
peso_1 = int(input("Informe o peso da primeira nota: "))
nota_2 = float(input("Informe a segunda nota: "))
peso_2 = int(input("Informe o peso da segunda nota: "))
nota_3 = float(input("Informe a terceita nota: "))
peso_3 = int(input("Informe o peso da terceira nota: "))

peso_geral = peso_1 + peso_2 + peso_3
media_ponderada = ((nota_1 * peso_1) + (nota_2 * peso_2) + (nota_3 * peso_3)) / peso_geral

print(f"A media ponderada e: {media_ponderada}")