/*Faça um algoritmo que receba dois números, calcule e mostre a subtração do primeiro pelo segundo*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

int num1;
int num2;
int sub;

printf("Entre com o numero 1: ");
scanf("%d", &num1);
printf("Entre com o numero 2: ");
scanf("%d", &num2);

sub = num1 - num2;

printf("A subtracao: %d", sub);

}
