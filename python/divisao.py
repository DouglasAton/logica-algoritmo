N: int
numerador: int
denominador: int
divisao: float

N = int(input("Quantos casos voce vai digitar? "))

for i in range(N):
    numerador = int(input("Entre com o numerador: "))
    denominador = int(input("Entre com o denominador: "))

    if denominador == 0:
        print("DIVISAO IMPOSSIVEL")
    else:
        divisao = float(numerador) / denominador
        print(f"DIVISAO = {divisao:.2f}")
