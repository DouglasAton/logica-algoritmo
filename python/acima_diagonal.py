N: int
soma: int

N = int(input("Qual a ordem da matriz? "))

mat: [[int]] = [[0 for x in range(N)] for x in range(N)]

for i in range(N):
    for j in range(N):
        mat[i][j] = (int(input(f"Elemento [{i},{j}]: ")))

soma = 0
for i in range(N):
    for j in range(N):
        if i < j:
            soma += mat[i][j]

print(f"SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = {soma}")
