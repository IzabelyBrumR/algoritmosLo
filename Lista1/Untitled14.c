/* Faça um algoritmo que calcule e mostre a área de um losango. A = (diagonal maior * diagonal menor)/2*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float diagM, diagm, area;

printf("Entre com a diagonal maior: ");
scanf("%f", &diagM);
printf("Entre com a diagonal menor: ");
scanf("%f", &diagm);

area = (diagM * diagm) /2;

printf("A area do seu losando eh: %0.2f\n", area);
}
