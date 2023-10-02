/*Uma conta de caderneta de poupança foi aberta com um depósito de R$500,00. Faça um algoritmo que calcule o valor do saldo da conta após cinco meses,
considerando que a conta é remunerada em 1,2% de juros ao mês. A fórmula de juros compostos é m= c (1+i )t, onde m é o montante, c é o capital,
i é a taxa de juros, e t é o número de períodos*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(){

float saldo;

saldo = 500 * pow((1 + 1.2/100), 5);

printf("saldo: %0.2f", saldo);

}
