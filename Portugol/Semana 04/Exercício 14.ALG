Algoritmo "Exercicio 14 (Semana 04)"
Var i, Idade, Nota, P, SomaI, Cont ,Cont2 : inteiro
Media : real
inicio
 Repita
  Escreva("Digite a sua idade : ")
   Leia(Idade)
  Escreva("O filme foi (3) Ótimo , (2) Bom ou (1) Regular ? ")
   Leia(Nota)
  Escreval
  Se Nota = 3 entao
    Cont <- Cont + 1
   SomaI <- SomaI + Idade
   Media <- SomaI/Cont
  Senao
  Se Nota = 1 entao
   P <- P + 1
  Senao
  Se Nota = 2 entao
    Cont2 <- Cont2 + 1
   Fimse
  Fimse
 Fimse
  i<- i + 1
 Ate i = 15
 Escreval("Média das idades das pessoas que responderam ótimo : ",Media)
 Escreval("Quantidade de pessoas que responderam regular : ",P)
 Escreval("Percentagem de pessoas que responderam bom : ",(Cont2*100)/i,"%")
Fimalgoritmo