N: int
totalRatos: int
totalSapos: int
totalCoelhos: int
qtdCobaias: int
totalCobaias: int
tipo: str
pratos: float
psapos: float
pcoelhos: float

N = int(input("Quantos casos de teste serao digitados? "))

totalRatos = 0
totalSapos = 0
totalCoelhos = 0
for i in range(N):
    qtdCobaias = int(input("Quantidade de cobaias: "))
    tipo = str(input("Tipo de cobaia: "))

    if tipo == 'R':
        totalRatos += qtdCobaias
    elif tipo == 'S':
        totalSapos += qtdCobaias
    else:
        totalCoelhos += qtdCobaias

totalCobaias = totalRatos + totalSapos + totalCoelhos
pcoelhos = (float(totalCoelhos) / totalCobaias) * 100.0
pratos = (float(totalRatos) / totalCobaias) * 100.0
psapos = (float(totalSapos) / totalCobaias) * 100.0

print()
print("RELATORIO FINAL:")
print(f"Total: {totalCobaias} cobaias")
print(f"Total de coelhos: {totalCoelhos}")
print(f"Total de ratos: {totalRatos}")
print(f"Total de sapos: {totalSapos}")
print(f"Percentual de coelhos: {pcoelhos:.2f}")
print(f"Percentual de ratos: {pratos:.2f}")
print(f"Percentual de sapos: {psapos:.2f}")
