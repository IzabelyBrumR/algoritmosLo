/*Fa�a um algoritmo que leia o valor do sal�rio m�nimo e o valor do sal�rio de uma pessoa.
Calcular e imprimir quantos sal�rios m�nimos essa pessoa ganha.*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float salmin, salario, tsalario;

printf("Entre com o salario minimo: ");
scanf("%f", &salmin);
printf("Entre com o seu salario: ");
scanf("%f", &salario);

tsalario = salario / salmin;

printf("Voce ganha %0.2f salarios minimo\n", tsalario);
}
