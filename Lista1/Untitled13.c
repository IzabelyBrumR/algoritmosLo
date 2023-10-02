/*Implemente um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float kg, gramas;

printf("Entre com o seu peso em Kg: ");
scanf("%f", &kg);

gramas = kg * 1000;

printf("O seu kg em gramas eh: %0.2f\n", gramas);
}
