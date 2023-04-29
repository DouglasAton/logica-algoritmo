N: int
maiorIdade: int
posMaior: int

N = int(input("Quantas pessoas voce vai digitar? "))

nomes: [str] = [0 for x in range(N)]
idades: [int] = [0 for x in range(N)]

for i in range(N):
    print(f"Dados da {i + 1}a pessoa:")
    nomes[i] = str(input("Nome: "))
    idades[i] = int(input("Idade: "))

maiorIdade = idades[0]
posMaior = 0
for i in range(N):
    if idades[i] > maiorIdade:
        maiorIdade = idades[i]
        posMaior = i

print(f"PESSOA MAIS VELHA: {nomes[posMaior]}")
