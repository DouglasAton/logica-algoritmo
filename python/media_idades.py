idade: int
cont: int
soma: float
media: float

soma = 0
cont = 0
print("Digite as idades:")
idade = int(input())

while idade >= 0:
    soma += idade
    cont += 1
    idade = int(input())

if cont == 0:
    print("IMPOSSIVEL CALCULAR")
else:
    media = soma / cont
    print(f"MEDIA = {media:.2f}")
