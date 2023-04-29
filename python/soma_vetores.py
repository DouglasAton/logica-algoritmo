N: int

N = int(input("Quantos valores vai ter cada vetor? "))

a: [int] = [0 for x in range(N)]
b: [int] = [0 for x in range(N)]
c: [int] = [0 for x in range(N)]

print("Digite os valores do vetor A:")

for i in range(N):
    a[i] = int(input())

print("Digite os valores do vetor B:")

for i in range(N):
    b[i] = int(input())

for i in range(N):
    c[i] = a[i] + b[i]

print("VETOR RESULTANTE:")

for i in range(N):
    print(c[i])
