N: int
cont: int

N = int(input("Quantos numeros voce vai digitar? "))

vet: [int] = [0 for x in range(N)]

for i in range(N):
    vet[i] = int(input("Digite um numero: "))

print()
print("NUMEROS PARES:")

cont = 0
for i in range(N):
    if vet[i] % 2 == 0:
        print(f"{vet[i]}  ", end="")
        cont += 1

print()
print(f"QUANTIDADE DE PARES = {cont}")
