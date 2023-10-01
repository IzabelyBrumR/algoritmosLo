/*Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float nota1, nota2, nota3, media;

printf("Entre com a primeira nota: ");
scanf("%f", &nota1);
printf("Entre com a segunda nota: ");
scanf("%f", &nota2);
printf("Entre com a terceira nota: ");
scanf("%f", &nota3);

media = (nota1 + nota2 + nota3) /3;

printf("A media: %0.2f", media);
}
