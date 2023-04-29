N: int
abaixo: int
entre: int
acima: int
totalCompra: float
totalVenda: float
lucroTotal: float

N = int(input("Serao digitados dados de quantos produtos? "))

nomes: [str] = [0 for x in range(N)]
precoCompra: [float] = [0 for x in range(N)]
precoVenda: [float] = [0 for x in range(N)]
porcentagemLucros: [float] = [0 for x in range(N)]

for i in range(N):
    print(f"Produto {i + 1}:")
    nomes[i] = str(input("Nome: "))
    precoCompra[i] = float(input("Preco de compra: "))
    precoVenda[i] = float(input("Preco de venda: "))

for i in range(N):
    porcentagemLucros[i] = (precoVenda[i] - precoCompra[i]) / precoCompra[i] * 100.0

abaixo = 0
entre = 0
acima = 0
for i in range(N):
    if porcentagemLucros[i] < 10.0:
        abaixo += 1
    elif porcentagemLucros[i] < 20.0:
        entre += 1
    else:
        acima += 1

totalCompra = 0
totalVenda = 0
for i in range(N):
    totalCompra += precoCompra[i]
    totalVenda += precoVenda[i]

lucroTotal = totalVenda - totalCompra

print()
print("RELATORIO:")
print(f"Lucro abaixo de 10%: {abaixo}")
print(f"Lucro entre 10% e 20%: {entre}")
print(f"Lucro acima de 20%: {acima}")
print(f"Valor total de compra: {totalCompra:.2f}")
print(f"Valor total de venda: {totalVenda:.2f}")
print(f"Lucro total: {lucroTotal:.2f}")
