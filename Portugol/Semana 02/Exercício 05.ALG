Algoritmo "Exerc�cio 05 (Semana 02)
//Escreva um algoritmo que leia o c�digo de um aluno e suas tr�s notas.Calcule
//a m�dia ponderada do aluno considerando que o peso para a maior nota seja 4
//e para as duas restantes,3. Mostre o c�digo do aluno,suas tr�s notas, a m�dia
// calculada e uma mensagem "APROVADO" se a m�dia for maior ou igual a 5 e
//"REPROVADO" se a m�dia for menor que 5.
var n1,n2,n3,m1,m2,m3 : real
    c : inteiro
inicio
escreva("C�digo do aluno: ")
leia(c)
escreva("1� nota: ")
leia(n1)
escreva("2� nota: ")
leia(n2)
escreva("3� nota: ")
leia(n3)
escreval("C�digo do aluno: ",c)
 escreval("1� nota: ",n1)
  escreval("2� nota: ",n2)
   escreval("3� nota: ",n3)
se((n1>=n2)e(n1>=n3))entao
 m1<-((n1*4)+(n2*3)+(n3*3))/10
  escreval("M�dia: ",m1)
   se(m1>=5)entao
    escreval("APROVADO!")
     senao
      escreval("REPROVADO!")
       fimse
Fimse
 se((n2>n1)e(n2>=n3))entao
  m2<-((n2*4)+(n1*3)+(n3*3))/10
   escreval("M�dia: ",m2)
    se(m2>=5)entao
     escreval("APROVADO!")
      senao
       escreval("REPROVADO!")
        fimse
Fimse
  se((n3>n1)e(n3>n2))entao
   m3<-((n3*4)+(n3*3)+(n3*3))/10
    escreval("M�dia: ",m3)
     se(m3>=5) entao
      escreval("APROVADO!")
       senao
        escreval("REPROVADO!")
         fimse
Fimse
fimalgoritmo