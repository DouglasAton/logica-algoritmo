M: int
N: int
soma: float

M = int(input("Qual a quantidade de linhas da matriz? "))
N = int(input("Qual a quantidade de colunas da matriz? "))

mat: [[float]] = [[0 for x in range(N)] for x in range(M)]
vet: [float] = [0 for x in range(M)]

for i in range(M):
    print(f"Digite os elementos da {i + 1}a. linha")
    for j in range(N):
        mat[i][j] = float(input())

for i in range(M):
    soma = 0
    for j in range(N):
        soma += mat[i][j]
    vet[i] = soma

print("VETOR GERADO:")

for i in range(M):
    print(f"{vet[i]:.1f}")
