/*Faça um algoritmo que receba quatro números inteiros, calcule e mostre a soma destes números.*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

int num1, num2, num3, num4, soma;

printf("Entre com o numero 1: ");
scanf("%d", &num1);
printf("Entre com o numero 2: ");
scanf("%d", &num2);
printf("Entre com o numero 3: ");
scanf("%d", &num3);
printf("Entre com o numero 4: ");
scanf("%d", &num4);

soma = num1 + num2 + num3 + num4;

printf("A soma: %d", soma);
}
