N: int
posMaior: int
maior: float

N = int(input("Quantos numeros voce vai digitar? "))

vet: [float] = [0 for x in range(N)]

for i in range(N):
    vet[i] = float(input("Digite um numero: "))

maior = vet[0]
posMaior = 0
for i in range(N):
    if vet[i] > maior:
        maior = vet[i]
        posMaior = i

print()
print(f"MAIOR VALOR = {maior:.1f}")
print(f"POSICAO DO MAIOR VALOR = {posMaior}")
