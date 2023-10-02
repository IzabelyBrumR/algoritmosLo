/*Faça um algoritmo que leia o valor do salário mínimo e o valor do salário de uma pessoa.
Calcular e imprimir quantos salários mínimos essa pessoa ganha.*/
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
