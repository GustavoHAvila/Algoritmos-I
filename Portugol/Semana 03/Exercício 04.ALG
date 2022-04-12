Algoritmo "Exercício 04 (semana 03)
// Faça um programa que receba um número inteiro maior que 1, verifique se
// o número fornecido é primo ou não e mostre uma mensagem de número primo
// ou de número não primo. Um número é primo quando ele é divisível apenas
//  por 1 e por ele mesmo
Var
N,i,C : inteiro
Inicio
escreva("Digite um número inteiro : ")
leia(N)
Para i de 1 ate N faca
 Se(N%i=0)entao
  C<-C+1
 fimse
Fimpara
  Se(C=2)entao
   escreval
   escreval(N," é um número primo!")
   senao
   escreval
   escreval(N," não é um número primo!")
  Fimse
fimalgoritmo