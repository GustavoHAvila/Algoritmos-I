Algoritmo "Exerc�cio 03"
//Fa�a um algoritmo para Controle de Cons�rcios, onde o algoritmo ir� ler
//n�mero total de presta��es, a quantidade de presta��es pagas e o valor de
//cada presta��o.O algoritmo dever� calcular e escrever na tela o valor
//total pago e o valor que ainda falta para ser pago.
Var
NTP,pP,Vcp,Vf,Vtp,Vt : inteiro
Inicio
escreva("N�mero total de preta��es: ")
leia (NTP)
escreva("Quantidades de presta��es pagas: ")
leia (pP)
escreva("Valor de cada presta��o: ")
leia (Vcp)
Vtp <-pP*Vcp
Vt <-NTP*Vcp
Vf <-Vt-Vtp
escreva("O valor total pago � de: ",Vtp,"R$,")
escreva(" E falta pagar: ",Vf,"R$")
Fimalgoritmo