Algoritmo "Exerc�cio 20 (Semana 04)"
Var
Media, N1, N2, N3, P1, P2, P3 : real
Op,i : inteiro
inicio
  Enquanto i < 2 faca
  Escreval(" Menu de op��es:")
  Escreval("1. M�dia aritm�tica")
  Escreval("2. M�dia ponderada")
  Escreval("3. Sair")
  Escreval
  Escreva(" Digite a op��o escolhida : ")
   Leia(Op)
 Se Op = 1 entao
  Escreva("Digite a 1� nota : ")
   Leia(N1)
  Escreva("Digite a 2� nota : ")
   Leia(N2)
  Escreva("M�dia aritm�tica : ",(N1+N2)/2)
  Escreval
  Escreval
 Senao
 Se Op = 2 entao
  Escreva("Digite a 1� nota : ")
  leia (N1)
  Escreva("Digite o seu respectivo peso : ")
  Leia (P1)
  Escreval
  Escreva("Digite a 2� nota : ")
  Leia (N2)
  Escreva("Digite o seu respectivo peso : ")
  Leia (P2)
  Escreval
  Escreva("Digite a 3� nota : ")
  Leia (N3)
  Escreva("Digite o seu respectivo peso : ")
  Leia (P3)
  Escreval
  Media<-((N1*P1)+(N2*P2)+(N3*P3))/(P1+P2+P3)
  Escreva("M�dia ponderada : ",Media)
  Escreval
  Escreval
  Senao
 Se Op = 3 entao
  i <- 2
  Senao
   Escreval(" Op��o inv�lida!")
   Escreval
  Fimse
 Fimse
Fimse
Fimenquanto
fimalgoritmo