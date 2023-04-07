Algoritmo "operadora"


Var

  valorPago : real
  minutos : real


Inicio

   escreval("Digite a quantidade de minutos: ")
   leia(minutos)
   
   valorPago <- 50.00
   
   se minutos > 100 entao
      valorPago <- valorPago + 2 * (minutos - 100)
   fimse

   escreval("Valor a pagar: R$ ", valorPago:4:2)


Fimalgoritmo
