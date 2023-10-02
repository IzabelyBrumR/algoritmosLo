/*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual calcule e mostre:
a) A idade dessa pessoa em anos; b) A idade dessa pessoa em meses; c) A idade dessa pessoa em dias; d) A idade dessa pessoa em semanas.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(){

int anonasc, anoatual, ianos, imeses, idias, isemanas;

printf("Entre com o ano do nascimento: ");
scanf("%d", &anonasc);
printf("Entre com o ano atual: ");
scanf("%d", &anoatual);

ianos = anoatual - anonasc;
imeses = ianos * 12;
idias = ianos * 365;
isemanas = ianos * 52;

printf("A idade em anos: %d\n", ianos);
printf("A idade em meses: %d\n", imeses);
printf("A idade em dias: %d\n", idias);
printf("A idade em semanas: %d\n", isemanas);

}
