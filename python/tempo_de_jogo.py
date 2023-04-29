horaInicial: int
horaFinal: int
resp: int

horaInicial = int(input("Hora inicial: "))
horaFinal = int(input("Hora final: "))

if horaInicial < horaFinal:
    resp = horaFinal - horaInicial
else:
    resp = 24 - (horaInicial - horaFinal)

print(f"O JOGO DUROU {resp} HORA(S)")
