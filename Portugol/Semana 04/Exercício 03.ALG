Algoritmo "Exerc�cio 3 (semana 04")
Var
i,Idade, Aux1, Aux2, Aux3, Aux4, Aux5 : inteiro
Faixa1,Faixa5 : real
inicio
 Para i de 1 ate 8 faca
     Escreva("Digite a sua idade : ")
      Leia(Idade)
       Se (idade<=15) entao
        Aux1 <- Aux1 + 1
Fimse
           Se ( (idade>=16) e (idade<=30) ) entao
            Aux2 <- Aux2 + 1
Fimse
             Se ( (idade>=31) e (idade<=46) ) entao
              Aux3 <- Aux3 + 1
Fimse
          Se ( (idade>=46) e (idade<=60) ) entao
           Aux4 <- Aux4 + 1
Fimse
        Se ( (idade>60)  ) entao
      Aux5 <- Aux4 + 1
Fimse
 Fimpara
Faixa1<-(Aux1*100)/8
Faixa5<-(Aux5*100)/8
escreval("Faixa et�ria         Idade")
escreval("     1�           ","At� 15 anos      : ",Aux1)
escreval("     2�           ","De 16 a 30 anos  : ",Aux2)
escreval("     3�           ","De 31 a 45 anos  : ",Aux3)
escreval("     4�           ","De 46 a 60 anos  : ",Aux4)
escreval("     5�           ","Acima de 60 anos : ",Aux5)
escreval
escreval("Porcentagem da 1� Faixa : ",faixa1)
escreval("Porcentagem da 2� Faixa : ",faixa5)
fimalgoritmo