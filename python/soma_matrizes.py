M: int
N: int

M = int(input("Quantas linhas vai ter cada matriz? "))
N = int(input("Quantas colunas vai ter cada matriz? "))

a: [[int]] = [[0 for x in range(N)] for x in range(M)]
b: [[int]] = [[0 for x in range(N)] for x in range(M)]
c: [[int]] = [[0 for x in range(N)] for x in range(M)]

print("Digite os valores da matriz A:")

for i in range(M):
    for j in range(N):
        a[i][j] = int(input(f"Elemento [{i},{j}]: "))

print("Digite os valores da matriz B:")

for i in range(M):
    for j in range(N):
        b[i][j] = int(input(f"Elemento [{i},{j}]: "))

for i in range(M):
    for j in range(N):
        c[i][j] = a[i][j] + b[i][j]

print("MATRIZ SOMA:")

for i in range(M):
    for j in range(N):
        print(f"{c[i][j]} ", end="")
    print()
