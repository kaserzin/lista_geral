### Em uma determinada cidade, cada m2 de um terreno está avaliado em R$ 300,00.
# Escreva um programa que leia o comprimento e a largura de um terreno localizado
# nesta cidade e calcule o seu valor de mercado.

largura = float(input("Informe a largura do terreno: "))
comprimento = float(input("Informe o comprimento do terreno: "))
area = largura*comprimento

print(f"O terreno com area de {area}m² vale R${(area*300):.2f}")