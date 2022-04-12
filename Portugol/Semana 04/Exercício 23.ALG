Algoritmo "Exercício 23 (Semana 04)"
Var
Sal : real
Op, i, M : inteiro
Inicio
Enquanto i < 1 faca
Escreval
Escreval(" Menu de opções")
Escreval("1. Novo salário")
Escreval("2. Férias")
Escreval("3. Décimo terceiro")
Escreval("4. Sair")
Escreval
Escreva(" Digite a opção desejada : ")
 Leia(Op)
  Se Op = 1 entao
   Escreva("Digite o valor de seu salário : ")
    Leia(Sal)
     Se Sal < 210 entao
      Sal <-((Sal*15)/100 + Sal)
       Escreva("Seu novo salário é : ",Sal," Reais.")
       Escreval
        Senao
     Se ((Sal>=210)e(Sal<=600))entao
      Sal <- ((Sal*10)/100 + Sal)
       Escreva("Seu novo salário é : ",Sal," Reais.")
       Escreval
        Senao
     Se Sal>600 entao
      Sal <-((Sal*5)/100 + Sal)
       Escreva("Seu novo salário é : ",Sal," Reais.")
       Escreval
        Fimse
        Fimse
        Fimse
  Senao
  Se Op = 2 entao
   Escreva("Digite o valor do seu salário : ")
    Leia(Sal)
     Sal <-(Sal)/3 + Sal
     Escreva("O valor de suas ferias é : ",Sal," Reais.")
     Escreval
  Senao
   Se Op = 3 entao
    Escreva("Digite o valor de seu salário : ")
    Leia(Sal)
    Repita
    Escreva("Digite o número de meses trabalhados : ")
    Leia(M)
      Se M >12 Entao
      Escreval ("O valor máximo permitido é 12 meses")
      fimse
      Ate M <= 12
      Se M <= 12 entao
     Escreva("O valor do seu décimo terceiro é : ",(Sal*M)/12)
     Escreval
     Fimse
  Senao
 Se Op = 4 entao
   i <- 2
 Senao
 Escreval
 Escreval("Código Inválido!")
 Fimse
 FImse
 FImse
 Fimse
Fimenquanto
Fimalgoritmo