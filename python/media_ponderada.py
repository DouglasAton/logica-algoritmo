N: int
valor1: float
valor2: float
valor3: float
media: float

N = int(input("Quantos casos voce vai digitar? "))

for i in range(N):
    print("Digite tres numeros:")
    valor1 = float(input())
    valor2 = float(input())
    valor3 = float(input())

    media = (valor1 * 2.0 + valor2 * 3.0 + valor3 * 5.0) / 10.0

    print(f"MEDIA = {media:.1f}")
