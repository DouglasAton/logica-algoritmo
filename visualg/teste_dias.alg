Algoritmo "teste_dias"


Var

   x : inteiro
   dia : caractere


Inicio

   escreval("Insira um n�mero:")
   escreval()

   leia(x)
   
   escolha x
   caso 1
        dia <- "Domingo"
   caso 2
        dia <- "Segunda"
   caso 3
        dia <- "Ter�a"
   caso 4
        dia <- "Quarta"
   caso 5
        dia <- "Quinta"
   caso 6
        dia <- "Sexta"
   caso 7
        dia <- "S�bado"
   outrocaso
        dia <- "Esse dia da semana n�o Existe"
   fimescolha
   
   escreva("Dia da semana: ", dia)



Fimalgoritmo