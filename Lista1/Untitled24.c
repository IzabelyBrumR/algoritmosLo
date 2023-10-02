/*O custo ao consumidor de um carro novo é a soma do preço de fábrica com o percentual de lucro do distribuidor e dos impostos aplicados ao preço de fábrica.
Faça um algoritmo que receba o preço de fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
a) O valor correspondente ao lucro do distribuidor; b) O valor correspondente aos impostos; c) O preço final do veículo*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

main(){

float precof, percl, perci, lucro, imposto, precofinal;

printf("Entre com o preco de fabrica: ");
scanf("%f", &precof);
printf("Entre com o percentual de lucro do distribuidor: ");
scanf("%f", &percl);
printf("Entre com o percentual de impostos: ");
scanf("%f", &perci);

lucro = precof * percl/100;
imposto = precof * perci/100;
precofinal = precof + percl + imposto;

printf("O lucro do distribuidor: %0.2f\n", lucro);
printf("O valor do imposto: %0.2f\n", imposto);
printf("O preco final: %0.2f\n", precofinal);

}
