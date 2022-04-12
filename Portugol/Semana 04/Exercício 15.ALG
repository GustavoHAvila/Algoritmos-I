Algoritmo "Exercicio 15 (Semana 04)"
Var
S, R : caractere
i,Cont,Cont2,Cont3,Cont4,Cont5,Cont6,TotalS,TotalN : inteiro
Media,Per : real
Inicio
Enquanto i < 4 faca
  Escreva("Digite (M) para sexo masculino ou (F) para sexo feminino : ")
   Leia(S)
  Escreva("Gostou do novo produto? (S/N) ")
   Leia(R)
   Se S = "M" entao
    Cont <- Cont + 1
    Se R = "S" entao
     Cont3 <- Cont3 + 1
     Senao
    Se R = "N" entao
     Cont2 <- Cont2 + 1
     Per <- (Cont2*100)/Cont
     Fimse
   Fimse
  Senao
    Se S = "F" entao
     Cont4 <- Cont4 + 1
    Se R = "S" entao
     Cont5 <- Cont5 + 1
    Senao
    Se R = "N" entao
     Cont6 <- Cont6 + 1
    Fimse
   Fimse
  Fimse
 Fimse
 Escreval
i <- i + 1
Fimenquanto
TotalS <- Cont5+Cont3
TotalN <- Cont2+Cont6
Escreval("Número de pessoas que responderam Sim : ",TotalS)
Escreval("Número de pessoas que responderam Não : ",TotalN)
Escreval("Número de mulheres que responderam sim : ",Cont5)
Escreval("Percentagem de homens que responderam não, entre homens : ",Per,"%")
Fimalgoritmo