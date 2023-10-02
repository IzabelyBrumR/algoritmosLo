/*Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário.*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

int num, tab, i;

printf("Entre com um numero: ");
scanf("%d", &num);

for (i=1; i<11; i++){

    tab = num * i;

printf("%d X %d = %d\n", num, i, tab);
}}
