Algoritmo "Exerc�cio 02(Semana 03)
Var
code : inteiro
S : real
inicio
Escreva("Qual o c�digo correspondente ao seu cargo? ")
leia(code)
escreva("Qual o seu sal�rio atual? ")
leia(S)
 Se code=1 entao
  escreval("Cargo : Escrit�ario")
   escreval("Percentual : 50%")
    escreval("Valor do aumento : ",(S*50)/100)
     escreval("Seu novo sal�rio : ",(S*50)/100+S)
 fimse
  Se code=2 entao
   escreval("Cargo : Secret�rio")
    escreval("Percentual : 35%")
     escreval("Valor do aumento : ",(S*35)/100)
      escreval("Seu novo sal�rio : ",(S*35)/100+S)
  fimse
   Se code=3 entao
    escreval("Cargo : Caixa")
     escreval("Percentual : 20%")
      escreval("Valor do aumento : ",(S*20)/100)
       escreval("Seu novo sal�rio : ",(S*20)/100+S)
   fimse
    Se code=4 entao
     escreval("Cargo : Gerente")
      escreval("Percentual : 10%")
       escreval("Valor do aumento : ",(S*10)/100)
        escreval("Seu novo sal�rio : ", (S*10)/100+S)
    fimse
     Se code=5 entao
      escreval("Cargo: Diretor")
       escreval("Percentual : N�o tem aumento de sal�rio")
        escreval("Seu sal�rio : ",S)
Fimse
Fimalgoritmo


 