/*Fa�a um algoritmo que receba o sal�rio-base de um funcion�rio, calcule e mostre o sal�rio a receber,
sabendo-se que esse funcion�rio tem gratifica��o de 5% sobre o sal�rio base e paga imposto de 7% sobre o sal�rio base.*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float salario, grat, imposto, nsalario;

printf("Entre com o seu salario: ");
scanf("%f", &salario);

imposto = salario * 7/100;
grat = salario + (salario * 5/100);
nsalario = grat - imposto;

printf("Salario a receber: %0.2f", nsalario);

}
