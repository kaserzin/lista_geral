### Escreva um programa que leia um valor em real, a cotação atual do dólar e 
# calcule o  valor informado pelo usuário em dólares.

real = float(input("Informe o valor em real: "))
cotacao = float(input("Informe a cotação do dolar: "))
print(f"R${real:.2f} convertido na cotação atual de {cotacao:.2f}$ fica USD {(real/cotacao):.2f}$")