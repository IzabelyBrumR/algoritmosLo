/* Crie um aplicativo que calcule e apresente o valor do volume de uma lata de óleo, utilizando a fórmula:  V = πr²h*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){

float vol, r, h;

printf("Entre com o raio da sua lata: ");
scanf("%f", &r);
printf("Entre com a altura da sua lata: ");
scanf("%f", &h);

vol = 3,14*(r*r)*h;

printf("O volume: %0.2f", vol);

}
