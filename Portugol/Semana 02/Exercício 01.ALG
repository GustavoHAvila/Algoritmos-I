algoritmo "Exercicio 01 (Semana 2)"
// Elaborar um algoritmo que lê valores a,b e c e os escreve.A seguir,
// encontre o maior dos 3 valores e escreva a mensagem.
var n1, n2, n3 : real
inicio
escreva("Digite um valor: ")
leia(n1)
escreva("Digite outro valor: ")
leia(n2)
escreva("Digite outro valor: ")
leia(n3)
 se((n1>=n2)e(n1>=n3))entao
  escreva("O maior valor é: ",n1)
 fimse
     se((n2>n1)e(n2>=n3))entao
      escreva("O maior valor é: ",n2)
 fimse
         se((n3>n1)e(n3>n2))entao
          escreva("O maior valor é: ",n3)
 fimse
fimalgoritmo