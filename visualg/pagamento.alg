Algoritmo "pagamento"


Var

   nome : caractere
   valorHora, pagamento : real
   horasTrabalhadas : inteiro


Inicio

   escreval("Insira os dados do Funcionário:")
   escreval()
   escreva("Nome: ")
   leia(nome)
   escreva("Valor por hora: ")
   leia(valorHora)
   escreva("Horas trabalhadas: ")
   leia(horasTrabalhadas)
   
   pagamento <- valorHora * horasTrabalhadas
   escreval()
   escreval("O pagamento para ", nome, " deve ser de R$ ", pagamento:8:2)



Fimalgoritmo