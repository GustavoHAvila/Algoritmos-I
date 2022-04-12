Algoritmo "Exercício 04 (Semana 02)
//Elabore um algoritmo que dada a idade de um nadador classifica-o em uma das
// seguintes categorias:
//infantil A = 5 - 7 anos          infantil B = 8 - 10 anos
//juvenil A = 11 - 13 anos         juvenil B = 14 - 17 anos
//adulto = maiores de 18 anos
var idade : inteiro
inicio
escreva("Digite sua idade: ")
leia(idade)
se((idade>=5)e(idade<=7)) entao
 escreva("Modalidade: Infantil A.")
  fimse
  se((idade>=8)e(idade<=10))entao
   escreva("Modalidade: Infantil B.")
    fimse
    se((idade>=11)e(idade<=13))entao
     escreva("Modalidade: Juvenil A.")
      fimse
      se((idade>=14)e(idade<=17))entao
       escreva("Modalidade: Juvenil B.")
        fimse
        se(idade>=18)entao
         escreva("Modalidade: Adulto.")
          fimse
          se(idade<5)entao
           escreva("Modalidade indisponível para esta idade!")
            fimse
fimalgoritmo