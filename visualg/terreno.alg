Algoritmo "terreno"


Var

   largura, comprimento, metroQuadrado, area, valorTerreno : real

Inicio

   escreva("Digite a largura do terreno: ")
   leia(largura)
   escreva("Digite o comprimento do terreno: ")
   leia(comprimento)
   escreva("Digite o valor do metro quadrado: ")
   leia(metroQuadrado)
   
   area <- largura * comprimento
   valorTerreno <- area * metroQuadrado
   
   escreval("Area do terreno = ", area:8:2, " m²")
   escreval("Preco do terreno = R$ ", valorTerreno:8:2)


Fimalgoritmo