/*Uma revendedora de carros usados paga a seus funcion�rios vendedores um sal�rio fixo por m�s, mais uma comiss�o tamb�m fixa para cada carro vendido
e mais 5% do valor das vendas por ele efetuadas. Escreva um algoritmo que leia o n�mero de carros por ele vendidos, o valor total de suas vendas, o sal�rio fixo
e o valor que ele recebe por carro vendido. Calcule e escreva o sal�rio final do vendedor*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(){

float vendat, salario, salariof, vendac;
int carros;

printf("Entre com o numero de carros vendidos: ");
scanf("%d", &carros);
printf("Entre com o valor total de suas vendas: ");
scanf("%f", &vendat);
printf("Entre com o salario: ");
scanf("%f", &salario);
printf("Entre com o valor recebido por cada carro vendido: ");
scanf("%f", &vendac);

salariof = salario + (vendac * carros) + (vendat * 5/100);

printf("Salario final: %0.2f", salariof);

}
