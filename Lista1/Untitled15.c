/* Escreva um algoritmo que leia a base e a altura de um ret�ngulo e exiba seu per�metro e sua �rea, dados por:
�rea = base x altura;
per�metro = 2 x (base + altura)*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float base, h, area, perimetro;

printf("Entre com a base: ");
scanf("%f", &base);
printf("Entre com a altura: ");
scanf("%f", &h);

area = base * h;
perimetro = (base + h) *2;

printf("A area do seu retangulo eh: %0.2f\n", area);
printf("O perimetro: %0.2f\n", perimetro);
}
