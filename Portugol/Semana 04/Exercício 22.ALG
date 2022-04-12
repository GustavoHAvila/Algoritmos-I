Algoritmo "Exercício 22 (Semana 04)"
Var
Idade, i, N : inteiro
Altura, Cont, Soma : real
Inicio
Idade <- 0
Escreva("Digite o número de pessoas a serem contadas : ")
 Leia(N)
Para i de 1 ate N faca
 Escreva("Digite a sua idade : ")
 Leia(Idade)
  Se Idade > 50 entao
   Cont <- Cont + 1
    Fimse
 Escreva("Digite a sua altura : ")
 Leia(Altura)
  Se Idade > 50 entao
    Soma <- Soma + Altura
  Escreval
  Fimse
Fimpara
Escreval
Escreva("Media de altura para pessoas com mais de 50 anos : ",Soma/Cont)
Fimalgoritmo