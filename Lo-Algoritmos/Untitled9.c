/*Faça um algoritmo que receba o salário-base de um funcionário, calcule e mostre o salário a receber,
sabendo-se que esse funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% sobre o salário base.*/
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
