Algoritmo "dardo"


Var

   A, B, C, maior : real


Inicio

   escreval("Digite as tres distancias:")
   leia(A)
   leia(B)
   leia(C)
   
   se (A > B) e (A > C) entao
      maior <- A
   senao
      se B > C entao
         maior <- B
      senao
           maior <- C
      fimse
   fimse
   escreval("MAIOR DISTANCIA = ", maior)


Fimalgoritmo