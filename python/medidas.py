import math

a: float
b: float
c: float
quadrado: float
triangulo: float
trapezio: float

a = float(input("Digite a medida A: "))
b = float(input("Digite a medida B: "))
c = float(input("Digite a medida C: "))

quadrado = math.pow(a, 2.0)
triangulo = (a * b) / 2.0
trapezio = ((a + b) * c) / 2.0

print(f"AREA DO QUADRADO = {quadrado:.4f}")
print(f"AREA DO TRIANGULO = {triangulo:.4f}")
print(f"AREA DO TRAPEZIO = {trapezio:.4f}")
