N: int
media: float

N = int(input("Quantos alunos serao digitados? "))

nomes: [str] = [0 for x in range(N)]
notas1: [float] = [0 for x in range(N)]
notas2: [float] = [0 for x in range(N)]

for i in range(N):
    print(f"Digite nome, primeira e segunda nota do {i + 1}o aluno:")
    nomes[i] = str(input())
    notas1[i] = float(input())
    notas2[i] = float(input())

print("Alunos aprovados:")

for i in range(N):
    media = (notas1[i] + notas2[i]) / 2

    if media >= 6.0:
        print(nomes[i])
