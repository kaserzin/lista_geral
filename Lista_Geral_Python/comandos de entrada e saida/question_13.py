### Escreva um programa que leia um valor em KB e 
# calcule o seu valor correspondente  em bits, bytes, MB e GB.

kb = int(input("Informe o valor em KB: "))
if kb <= 0:
    print("Valor Invalido! ")
else:
    print(f"""{kb} KB convertidos em bits fica: {kb * (1024*8)} .
{kb} KB convertidos em bytes fica: {kb * 1024} .
{kb} KB convertidos em MB fica: {kb / 1024} .
{kb} KB convertidos em GB fica: {kb / (1024 **2)} .""")