Algoritmo "Exercício 02(Semana 03)
Var
code : inteiro
S : real
inicio
Escreva("Qual o código correspondente ao seu cargo? ")
leia(code)
escreva("Qual o seu salário atual? ")
leia(S)
 Se code=1 entao
  escreval("Cargo : Escritúario")
   escreval("Percentual : 50%")
    escreval("Valor do aumento : ",(S*50)/100)
     escreval("Seu novo salário : ",(S*50)/100+S)
 fimse
  Se code=2 entao
   escreval("Cargo : Secretário")
    escreval("Percentual : 35%")
     escreval("Valor do aumento : ",(S*35)/100)
      escreval("Seu novo salário : ",(S*35)/100+S)
  fimse
   Se code=3 entao
    escreval("Cargo : Caixa")
     escreval("Percentual : 20%")
      escreval("Valor do aumento : ",(S*20)/100)
       escreval("Seu novo salário : ",(S*20)/100+S)
   fimse
    Se code=4 entao
     escreval("Cargo : Gerente")
      escreval("Percentual : 10%")
       escreval("Valor do aumento : ",(S*10)/100)
        escreval("Seu novo salário : ", (S*10)/100+S)
    fimse
     Se code=5 entao
      escreval("Cargo: Diretor")
       escreval("Percentual : Não tem aumento de salário")
        escreval("Seu salário : ",S)
Fimse
Fimalgoritmo


 