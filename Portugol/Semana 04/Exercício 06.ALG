Algoritmo "Exerc�cio 06 (Semana 04)  "
Var
i : inteiro
ValorP,ValorV,TotalP,TotalV : real
Code  : caractere
Inicio
Para i de 1 ate 3 faca
Escreva("Qual a forma do ",i,"� pagamento? (V/P) : ")
 leia(Code)
Se Code = "V" entao
 Escreva("Qual o valor? ")
  leia(ValorV)
 TotalV <- TotalV + ValorV
  Senao
  Se Code = "P" entao
 Escreva("Qual o valor? ")
  leia(ValorP)
 TotalP <- TotalP + ValorP
  Senao
  Escreva("C�digo Inv�lido")
  Fimse
Fimse
Fimpara
 Escreval("Valor total � Vista : ",TotalV," Reais.")
 Escreval("Valor total � Prazo : ",TotalP," Reais.")
 Escreval("Valor total das compras efetuadas : ",TotalV+TotalP," Reais.")
 Escreval("Valor da primeira presta��o : ",(TotalP)/3," Reais.")
fimalgoritmo