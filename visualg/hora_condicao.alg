Algoritmo "hora_condicao"


Var

   hora : inteiro


Inicio


   escreva("Insira uma hora do dia:")
   leia(hora)

   se hora < 12 entao
      escreval("Bom dia!")
   senao
      se hora < 18 entao
         escreval("Boa tarde!")
      senao
         escreval("Boa Noite!")
      fimse
   fimse

Fimalgoritmo