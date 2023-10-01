/* Faça um algoritmo que receba um número positivo e maior que zero, calcule e mostre:a) O número digitado ao quadrado.
b) O número digitado ao cubo. c) A raiz quadrada do número digitado. d) A raiz cúbica do número digitado*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){

int num, quadrado, cubo;
float raizQ, raizC;

printf("Entre com um numero + e >0: ");
scanf("%d", &num);

quadrado = num * num;
cubo = num * num * num;
raizQ = sqrt(num);
raizC = pow(num, 1/3);

printf("O quadrado: %d\n", quadrado);
printf("O cubo: %d\n", cubo);
printf("A raiz quadrada: %0.2f\n", raizQ);
printf("A raiz cubica: %0.2f", raizC);

}
