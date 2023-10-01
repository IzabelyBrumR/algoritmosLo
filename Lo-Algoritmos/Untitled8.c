/*Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
Calcular e escrever o valor do novo salário*/
#include <math.h>
#include <locale.h>
#include <stdio.h>

main(){

float salario, novos, aumento;

printf("Entre com o seu salario: ");
scanf("%f", &salario);
printf("Entre com a porcentagem1 de aumento: ");
scanf("%f", &aumento);

novos = salario + (salario * aumento/100);

printf("Novo salario: %0.2f", novos);

}
