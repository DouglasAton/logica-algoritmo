N: int
x: int
fora: int
dentro: int

N = int(input("Quantos numeros voce vai digitar? "))

fora = 0
dentro = 0
for i in range(N):
    x = int(input("Digite um numero: "))

    if x < 10 or x > 20:
        fora += 1
    else:
        dentro += 1

print(f"{dentro} DENTRO")
print(f"{fora} FORA")
