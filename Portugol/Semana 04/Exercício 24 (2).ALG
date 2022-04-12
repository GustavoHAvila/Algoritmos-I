Algoritmo "Exercício 24 (Semana 04)"
Var
i,A, V, Maior, Menor : inteiro
Inicio
Repita
Escreva("Digite um valor : ")
Leia(V)
Enquanto i < 1 faca
Menor <- V
Maior <- V
i <- 1
fimenquanto
Se ((V < Menor)e(V > 0)) entao
Menor <- V
Senao
Se V > Maior entao
Maior <- V
Fimse
Fimse
Se V < 0 entao
 Escreval("Número Negativo!")
  Fimse
Ate V = 0
Escreval("O maior valor é : ",Maior)
Escreval("O menor valor é : ",Menor)
fimalgoritmo