Algoritmo "Exerc�cio 23 (Semana 04)"
Var
Sal : real
Op, i, M : inteiro
Inicio
Enquanto i < 1 faca
Escreval
Escreval(" Menu de op��es")
Escreval("1. Novo sal�rio")
Escreval("2. F�rias")
Escreval("3. D�cimo terceiro")
Escreval("4. Sair")
Escreval
Escreva(" Digite a op��o desejada : ")
 Leia(Op)
  Se Op = 1 entao
   Escreva("Digite o valor de seu sal�rio : ")
    Leia(Sal)
     Se Sal < 210 entao
      Sal <-((Sal*15)/100 + Sal)
       Escreva("Seu novo sal�rio � : ",Sal," Reais.")
       Escreval
        Senao
     Se ((Sal>=210)e(Sal<=600))entao
      Sal <- ((Sal*10)/100 + Sal)
       Escreva("Seu novo sal�rio � : ",Sal," Reais.")
       Escreval
        Senao
     Se Sal>600 entao
      Sal <-((Sal*5)/100 + Sal)
       Escreva("Seu novo sal�rio � : ",Sal," Reais.")
       Escreval
        Fimse
        Fimse
        Fimse
  Senao
  Se Op = 2 entao
   Escreva("Digite o valor do seu sal�rio : ")
    Leia(Sal)
     Sal <-(Sal)/3 + Sal
     Escreva("O valor de suas ferias � : ",Sal," Reais.")
     Escreval
  Senao
   Se Op = 3 entao
    Escreva("Digite o valor de seu sal�rio : ")
    Leia(Sal)
    Repita
    Escreva("Digite o n�mero de meses trabalhados : ")
    Leia(M)
      Se M >12 Entao
      Escreval ("O valor m�ximo permitido � 12 meses")
      fimse
      Ate M <= 12
      Se M <= 12 entao
     Escreva("O valor do seu d�cimo terceiro � : ",(Sal*M)/12)
     Escreval
     Fimse
  Senao
 Se Op = 4 entao
   i <- 2
 Senao
 Escreval
 Escreval("C�digo Inv�lido!")
 Fimse
 FImse
 FImse
 Fimse
Fimenquanto
Fimalgoritmo