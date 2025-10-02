### Escreva um programa que leia um número inteiro N e imprima dos 10 primeiros
# elementos da sua tabuada. A saída do programa deve seguir o formato abaixo, que
# mostra os 5 primeiros elementos da tabuada do 2.
# 1 X 2 = 2
# 2 X 2 = 4
# 3 X 2 = 6
# 4 X 2 = 8
# 5 X 2 = 10
numero = int(input("Informe o numero para receber a tabuada: "))
print(f"""1 X {numero} = {numero * 1}
2 X {numero} = {numero * 2}
3 X {numero} = {numero * 3}
4 X {numero} = {numero * 4}
5 X {numero} = {numero * 5}
6 X {numero} = {numero * 6}
7 X {numero} = {numero * 7}
8 X {numero} = {numero * 8}
9 X {numero} = {numero * 9}
10 X {numero} = {numero * 10}
""")