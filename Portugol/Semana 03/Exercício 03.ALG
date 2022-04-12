Algoritmo "Exercício 03 (Semana 03)"
Var
altura,peso : real
inicio
Escreva("Qual o seu peso? ")
leia(peso)
Escreva("Qual a sua altura? ")
leia(altura)
 se((peso<=60)e(altura<1.20))entao
  escreva("Classificação : A")
   fimse
 se((peso<=60)e(altura>=1.20)e(altura<=1.70))entao
  escreva("Classificação : B")
   fimse
 se((peso<=60)e(altura>1.70))entao
  escreva("Classificação : C")
   fimse
 se((peso>60)e(peso<90)e(altura<1.20))entao
  escreva("Classificação : D")
   fimse
 se((peso>60)e(peso<90)e(altura>=1.20)e(altura<=1.70))entao
  escreva("Classificação : E")
   fimse
 se((peso>60)e(peso<90)e(altura>1.70))entao
  escreva("Classificação : F")
   fimse
 se((peso>=90)e(altura<1.20))entao
  escreva("Classificação : G")
   fimse
 se((peso>=90)e(altura>=1.20)e(altura<=1.70))entao
  escreva("Classificação : H")
   fimse
 se((peso>=90)e(altura>1.70))entao
  escreva("Classificação : I")
   fimse
fimalgoritmo