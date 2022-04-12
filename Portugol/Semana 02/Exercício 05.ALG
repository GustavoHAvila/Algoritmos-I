Algoritmo "Exercício 05 (Semana 02)
//Escreva um algoritmo que leia o código de um aluno e suas três notas.Calcule
//a média ponderada do aluno considerando que o peso para a maior nota seja 4
//e para as duas restantes,3. Mostre o código do aluno,suas três notas, a média
// calculada e uma mensagem "APROVADO" se a média for maior ou igual a 5 e
//"REPROVADO" se a média for menor que 5.
var n1,n2,n3,m1,m2,m3 : real
    c : inteiro
inicio
escreva("Código do aluno: ")
leia(c)
escreva("1ª nota: ")
leia(n1)
escreva("2ª nota: ")
leia(n2)
escreva("3ª nota: ")
leia(n3)
escreval("Código do aluno: ",c)
 escreval("1ª nota: ",n1)
  escreval("2ª nota: ",n2)
   escreval("3ª nota: ",n3)
se((n1>=n2)e(n1>=n3))entao
 m1<-((n1*4)+(n2*3)+(n3*3))/10
  escreval("Média: ",m1)
   se(m1>=5)entao
    escreval("APROVADO!")
     senao
      escreval("REPROVADO!")
       fimse
Fimse
 se((n2>n1)e(n2>=n3))entao
  m2<-((n2*4)+(n1*3)+(n3*3))/10
   escreval("Média: ",m2)
    se(m2>=5)entao
     escreval("APROVADO!")
      senao
       escreval("REPROVADO!")
        fimse
Fimse
  se((n3>n1)e(n3>n2))entao
   m3<-((n3*4)+(n3*3)+(n3*3))/10
    escreval("Média: ",m3)
     se(m3>=5) entao
      escreval("APROVADO!")
       senao
        escreval("REPROVADO!")
         fimse
Fimse
fimalgoritmo