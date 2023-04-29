import math

N: int
indicaLinha: int
indicaColuna: int
soma: float

N = int(input("Qual a ordem da matriz? "))

mat: [[float]] = [[0 for x in range(N)] for x in range(N)]

for i in range(N):
    for j in range(N):
        mat[i][j] = float(input(f"Elemento [{i},{j}]: "))

soma = 0
for i in range(N):
    for j in range(N):
        if mat[i][j] > 0:
            soma += mat[i][j]

print()
print(f"SOMA DOS POSITIVOS: {soma:.1f}")
print()

indicaLinha = int(input("Escolha uma linha: "))

print("LINHA ESCOLHIDA: ", end="")

for i in range(N):
    print(f"{mat[indicaLinha][i]:.1f} ", end="")

print()
print()
indicaColuna = int(input("Escolha uma coluna: "))

print("COLUNA ESCOLHIDA: ", end="")

for i in range(N):
    print(f"{mat[i][indicaColuna]:.1f} ", end="")

print()
print()
print("DIAGONAL PRINCIPAL: ", end="")

for i in range(N):
    print(f"{mat[i][i]:.1f} ", end="")

for i in range(N):
    for j in range(N):
        if mat[i][j] < 0:
            mat[i][j] = math.pow(mat[i][j], 2)

print()
print()
print("MATRIZ ALTERADA:")

for i in range(N):
    for j in range(N):
        print(f"{mat[i][j]:.1f} ", end="")
    print()
