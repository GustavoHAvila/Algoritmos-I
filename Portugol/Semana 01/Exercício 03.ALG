Algoritmo "Exercício 03"
//Faça um algoritmo para Controle de Consórcios, onde o algoritmo irá ler
//número total de prestações, a quantidade de prestações pagas e o valor de
//cada prestação.O algoritmo deverá calcular e escrever na tela o valor
//total pago e o valor que ainda falta para ser pago.
Var
NTP,pP,Vcp,Vf,Vtp,Vt : inteiro
Inicio
escreva("Número total de pretações: ")
leia (NTP)
escreva("Quantidades de prestações pagas: ")
leia (pP)
escreva("Valor de cada prestação: ")
leia (Vcp)
Vtp <-pP*Vcp
Vt <-NTP*Vcp
Vf <-Vt-Vtp
escreva("O valor total pago é de: ",Vtp,"R$,")
escreva(" E falta pagar: ",Vf,"R$")
Fimalgoritmo