Algoritmo "consumo"


Var

   distancia, combustivelGasto, consumo : real


Inicio

   escreval("Insira os Dados:")
   escreval()
   escreva("Distancia percorrida: ")
   leia(distancia)
   escreva("Combust�vel gasto: ")
   leia(combustivelGasto)
   
   consumo <- distancia / combustivelGasto
   
   escreval()
   escreval("O consumo m�dio foi de = ", consumo:8:3)


Fimalgoritmo