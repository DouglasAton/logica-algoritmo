N: int
qtdHomens: int
qtdMulheres: int
menorAltura: float
maiorAltura: float
mediaALtura: float
alturaTotal: float

N = int(input("Quantas pessoas serao digitadas? "))

alturas: [float] = [0 for x in range(N)]
generos: [str] = [0 for x in range(N)]

for i in range(N):
    alturas[i] = float(input(f"Altura da {i + 1}a pessoa: "))
    generos[i] = str(input(f"Genero da {i + 1}a pessoa: "))

menorAltura = alturas[0]
maiorAltura = alturas[0]

for i in range(N):
    if alturas[i] > maiorAltura:
        maiorAltura = alturas[i]
    if alturas[i] < menorAltura:
        menorAltura = alturas[i]

qtdHomens = 0
qtdMulheres = 0
alturaTotal = 0
for i in range(N):
    if generos[i] == 'M':
        qtdHomens += 1
    else:
        qtdMulheres += 1
        alturaTotal += alturas[i]

mediaALtura = alturaTotal / qtdMulheres

print(f"Menor altura = {menorAltura:.2f}")
print(f"Maior altura = {maiorAltura:.2f}")
print(f"Media das alturas das mulheres = {mediaALtura:.2f}")
print(f"Numero de homens = {qtdHomens}")
