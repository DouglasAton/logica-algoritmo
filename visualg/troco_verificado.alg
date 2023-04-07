Algoritmo "troco_verificado"


Var

   preco, dinheiro, troco, dinheiroQueFalta : real
   quantidade : inteiro


Inicio

   escreva("Preço unitário do produto: ")
   leia(preco)
   escreva("Quantidade comprada: ")
   leia(quantidade)
   escreva("Dinheiro recebido: ")
   leia(dinheiro)

   se dinheiro >= (preco * quantidade) entao
      troco <- dinheiro - preco * quantidade
      escreval("TROCO = ", troco:4:2)
   senao
       dinheiroQueFalta <- preco * quantidade - dinheiro
       escreval("DINHEIRO INSUFICIENTE. FALTAM ", dinheiroQueFalta:4:2," REAIS")
   fimse

   


Fimalgoritmo
