/* Fa�a um algoritmo que receba um n�mero positivo e maior que zero, calcule e mostre:a) O n�mero digitado ao quadrado.
b) O n�mero digitado ao cubo. c) A raiz quadrada do n�mero digitado. d) A raiz c�bica do n�mero digitado*/
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
