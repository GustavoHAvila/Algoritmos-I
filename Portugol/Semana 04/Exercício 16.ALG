Algoritmo "Exercício 16 (Semana 04)"
//Faça um programa que receba várias idades, calcule e mostre a média das
//idades digitadas.Finalize digitando idade igual a zero
Var
Cont, i, Idade, Aux : inteiro
Media : real
Inicio
Escreva("Digite a quantidade de idades a serem contadas : ")
leia(cont)
Para i de 1 ate Cont faca
Escreva("Digite a idade : ")
leia(Idade)
Aux <- Aux + Idade
Fimpara
Media <- Aux/Cont
Escreva("Media das idades digitadas : ",Media)
Fimalgoritmo