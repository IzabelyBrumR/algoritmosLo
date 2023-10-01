/*Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que A = ((base maior
+ base menor) * altura)/2*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){

float area, baseM, basem, h;

printf("Entre com a base Maior: ");
scanf("%f", &baseM);
printf("Entre com a base Menor: ");
scanf("%f", &basem);
printf("Entre com a altura: ");
scanf("%f", &h);

area = ((baseM + basem)* h) /2;

printf("A area: %0.2f", area);

}
