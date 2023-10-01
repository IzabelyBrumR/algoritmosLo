/*Implemente um aplicativo que leia a razão r de uma progressão aritmética e o valor a1 do primeiro termo
e calcule e exiba o décimo termo da série. O n-ésimo termo da progressão arimética é dado por: an = a1 + (n − 1) x r*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){

float r, al, an;

printf("Entre com a razao da progressao: ");
scanf("%f", &r);
printf("Entre com o valor do primeiro termo: ");
scanf("%f", &al);

an = al + (10 - 1) * r;

printf("O decimo termo: %0.2f", an);

}
