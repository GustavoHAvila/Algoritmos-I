Algoritmo "Exercício 07 (Semana 04) "
Var
Idade, altura , peso, Cont, Cont2, Cont3, Cont4, Soma, Media, MediaP : real
inicio
Repita
cont <- cont+1
 Escreval("   ",cont,"ª Pessoa  ")
 Escreva("Digite a sua idade : ")
  leia(Idade)
   Se idade>50 entao
    Cont2 <- Cont2+1
     fimse
 Escreva("Digite a sua altura : ")
  leia(altura)
   Se ( (idade>10)e(idade<20))entao
    Cont3 <- Cont3+1
     Soma<- soma + altura
   Fimse
 Escreva("Digite o seu peso : ")
  leia(peso)
   Se peso<40 entao
    Cont4 <- Cont4 +1
   Fimse
 Escreval
Até cont = 5
 MediaP <-(Cont4*100)/cont
 Media <-(Soma)/Cont3
Escreval("Quantidade de pessoas com idade superior a 50 anos : ",Cont2)
Escreval("Média das alturas das pessoas com idade entre 10 e 20 anos : ",Media)
Escreval("Porcentagem de pessoas com peso inferior a 40 kg : ",MediaP,"%")
fimalgoritmo