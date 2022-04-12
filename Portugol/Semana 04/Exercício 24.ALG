Algoritmo "Exercício 24 (Semana 04)"
Var
i, N, V, M, Menor : inteiro
Inicio
i <- 0
V <- 0
N <- 0
Escreva("Digite os valores a serem contados : ")
 Leia(N)
Enquanto i < N faca
  Escreva("Digite um valor : ")
   Leia(V)
     Se V > M entao
      M <- V
      senao
      Se V < M entao
      Menor <- V
      fimse
      fimse
       Se V < 0 entao
        escreval("Valor negativo!")
        Senao
       Se V = 0 entao
        i <- N
        fimse
       Fimse
 i <- i + 1
Fimenquanto
Escreval("O maior valor é : ",M)
Escreval("O menor valor é : ",Menor)
fimalgoritmo
