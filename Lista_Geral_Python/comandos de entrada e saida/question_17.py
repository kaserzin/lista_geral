### Escreva um programa que leia a área de uma casa e o valor cobrado por um arquiteto
# por cada metro quadrado de um projeto arquitetônico e calcule o custo final do
# projeto.

area = float(input("Informe a area da casa: "))
valor = float(input(" Informe o valor em R$: "))

print(f"Um projeto de casa com {area}m² custa: R${(area*valor):.2f}")