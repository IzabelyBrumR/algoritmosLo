/* Fa�a um algoritmo que receba o sal�rio de um funcion�rio,
calcule e mostre o novo sal�rio, sabendo-se que este sofreu um aumento de 25%.*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float salario, novos;

printf("Entre com o seu salario: ");
scanf("%f", &salario);

novos = salario + (salario * 25/100);

printf("Novo salario: %0.2f", novos);

}
