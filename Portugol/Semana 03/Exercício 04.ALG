Algoritmo "Exerc�cio 04 (semana 03)
// Fa�a um programa que receba um n�mero inteiro maior que 1, verifique se
// o n�mero fornecido � primo ou n�o e mostre uma mensagem de n�mero primo
// ou de n�mero n�o primo. Um n�mero � primo quando ele � divis�vel apenas
//  por 1 e por ele mesmo
Var
N,i,C : inteiro
Inicio
escreva("Digite um n�mero inteiro : ")
leia(N)
Para i de 1 ate N faca
 Se(N%i=0)entao
  C<-C+1
 fimse
Fimpara
  Se(C=2)entao
   escreval
   escreval(N," � um n�mero primo!")
   senao
   escreval
   escreval(N," n�o � um n�mero primo!")
  Fimse
fimalgoritmo