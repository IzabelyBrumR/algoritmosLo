/*Implemente um algoritmo que receba a medida de dois �ngulos de um tri�ngulo,
calcule e mostre a medida do terceiro �ngulo. Sabe-se que a soma dos �ngulos de um tri�ngulo � 180*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){

float ang1, ang2, ang3;

printf("Entre com o angulo um: ");
scanf("%f", &ang1);
printf("Entre com o angulo dois: ");
scanf("%f", &ang2);

ang3 = 180 - ang1 - ang2;

printf("O angulo tres eh: %0.2f", ang3);

}
