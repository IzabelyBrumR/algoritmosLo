/*O custo ao consumidor de um carro novo � a soma do pre�o de f�brica com o percentual de lucro do distribuidor e dos impostos aplicados ao pre�o de f�brica.
Fa�a um algoritmo que receba o pre�o de f�brica de um ve�culo, o percentual de lucro do distribuidor e o percentual de impostos. Calcule e mostre:
a) O valor correspondente ao lucro do distribuidor; b) O valor correspondente aos impostos; c) O pre�o final do ve�culo*/
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
