/* Faça um algoritmo que receba o valor de um depósito e o valor da taxa de juros,
calcule e mostre o valor do rendimento e o valor total depois do rendimento.*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float deposito, juros, rend, valort;

printf("Entre com o seu deposito: ");
scanf("%f", &deposito);
printf("Entre com o juros: ");
scanf("%f", &juros);

rend = (deposito * juros) /100;
valort = deposito + rend;

printf("Rendimento: %0.2f\n", rend);
printf("Valor Total: %0.2f", valort);
}
