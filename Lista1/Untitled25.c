/*Uma conta de caderneta de poupan�a foi aberta com um dep�sito de R$500,00. Fa�a um algoritmo que calcule o valor do saldo da conta ap�s cinco meses,
considerando que a conta � remunerada em 1,2% de juros ao m�s. A f�rmula de juros compostos � m= c (1+i )t, onde m � o montante, c � o capital,
i � a taxa de juros, e t � o n�mero de per�odos*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(){

float saldo;

saldo = 500 * pow((1 + 1.2/100), 5);

printf("saldo: %0.2f", saldo);

}
