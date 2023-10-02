/*Escreva um algoritmo que receba duas notas, calcule e mostre a média ponderada destas,
considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float nota1, nota2, media;

printf("Entre com a primeira nota: ");
scanf("%f", &nota1);
printf("Entre com a segunda nota: ");
scanf("%f", &nota2);

media = (nota1 *2 + nota2 *3)/5;

printf("A media: %0.2f", media);
}
