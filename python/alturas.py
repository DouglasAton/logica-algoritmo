N: int
cont: int
soma: float
media: float
porcentagem: float

N = int(input("Quantas pessoas serão digitadas? "))

nomes: [str] = [0 for x in range(N)]
idades: [int] = [0 for x in range(N)]
alturas: [float] = [0 for x in range(N)]

for i in range(N):
    print(f"Dados da {i + 1}a pessoa:")
    nomes[i] = str(input("Nome: "))
    idades[i] = int(input("Idade: "))
    alturas[i] = float(input("Altura: "))

soma = 0
for altura in alturas:
    soma += altura

media = soma / N
print()
print("Altura media: {:.2f}".format(media))

cont = 0
for i in range(N):
    if idades[i] < 16:
        cont += 1

porcentagem = cont * 100 / N
print("Pessoas com menos de 16 anos: {:.1f}%".format(porcentagem))

print("Nomes das pessoas com menos de 16 anos:")
for i in range(N):
    if idades[i] < 16:
        print(nomes[i])
