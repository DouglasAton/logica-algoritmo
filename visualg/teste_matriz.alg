Algoritmo "teste_matriz"


Var

   M, N, i, j : inteiro
   A : vetor [0..4, 0..4] de inteiro


Inicio

   escreva("Quantas linhas vai ter a matriz? ")
   leia(M)
   escreva("Quantas colunas vai ter a matriz? ")
   leia(N)

   para i de 0 ate M-1 faca
      para j de 0 ate N-1 faca
      escreva("Elemento [", i, ",", j, "]: ")
      leia(A[i,j])
      fimpara
   fimpara

   escreval
   escreval("MATRIZ DIGITADA:")
      para i de 0 ate M-1 faca
         para j de 0 ate N-1 faca
         escreva(A[i,j], " ")
      fimpara
      escreval
   fimpara

Fimalgoritmo