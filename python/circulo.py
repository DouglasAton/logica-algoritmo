import math

r: float
area: float

r = float(input("Digite o valor do raio do circulo: "))

area = math.pi * math.pow(r, 2.0)

print(f"AREA = {area:.3f}")
