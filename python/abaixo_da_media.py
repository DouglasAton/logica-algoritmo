N: int
soma: float
media: float

N = int(input("Quantos elementos vai ter o vetor? "))

vet: [float] = [0 for x in range(N)]

for i in range(N):
    vet[i] = float(input("Digite um numero: "))

soma = 0

for i in range(N):
    soma += vet[i]

media = soma / N
print()
print(f"MEDIA DO VETOR = {media:.3f}")
print("ELEMENTOS ABAIXO DA MEDIA:")

for i in range(N):
    if vet[i] < media:
        print(f"{vet[i]:.1f}")
