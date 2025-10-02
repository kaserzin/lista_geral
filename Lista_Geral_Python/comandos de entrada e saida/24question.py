### Escreva um programa que leia o termo inicial e a razão de uma progressão aritmética e
# imprima os 5 primeiros termos desta progressão.
termo_inicial = int(input("Informe o termo incial da PA: "))
razao = int(input("Informe a razão da PA: "))
print(f"""O 1º termo é: {termo_inicial}
O 2º termo é: {termo_inicial + razao}
O 3º termo é: {termo_inicial + razao * 2}
O 4º termo é: {termo_inicial + razao * 3}
O 5º termo é: {termo_inicial + razao * 4}""")