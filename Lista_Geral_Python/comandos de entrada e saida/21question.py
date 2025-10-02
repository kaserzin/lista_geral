### Escreva um programa que leia o preço de produção de um determinado produto e a
#margem de lucro desejada pelo fabricante e calcule qual deve ser o seu preço de
# venda.

custo = float(input("Informe o custo de produção: "))
margem = int(input("Informe a margem de lucro: "))
print(f"O custo do produto e de R${custo:.2f} e com uma margem de {margem}% de lucro o preço final fica: {(custo * (1+(margem/100))):.2f}")