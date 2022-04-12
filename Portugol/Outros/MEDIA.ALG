algoritmo "media"
var
  c,n,v,aux : inteiro
inicio
escreva("Digite a quantidade de valores a serem contados : ")
leia(n)
  aux<- 0
  para c de 1 ate n faca
  escreva("Digite o valor",c,": ")
  leia(v)
  aux<- aux + v
fimpara
  escreva("Média =",aux/n)
fimalgoritmo