Algoritmo "medidas"


Var

    A, B, C, areaQuadrado, areaTriangulo, areaTrapezio : real


Inicio


   escreval("Insira os dados:")
   escreval()
   escreva("Digite a medida A: ")
   leia(A)
   escreva("Digite a medida B: ")
   leia(B)
   escreva("Digite a medida C: ")
   leia(C)
   
   areaQuadrado <- Exp(A, 2)
   areaTriangulo <- (A * B) / 2
   areaTrapezio <- (A + B) * C /2
   
   escreval()
   escreval("AREA DO QUADRADO = ", areaQuadrado:5:4)
   escreval("AREA DO TRIANGULO = ", areaTriangulo:5:4)
   escreval("AREA DO TRAPEZIO = ", areaTrapezio:5:4)



Fimalgoritmo