/*Fa�a um algoritmo para ler valores para as vari�veis inteiras A e B. Efetuar a troca dos valores de forma que a vari�vel A
passe a possuir o valor da vari�vel B e que a vari�vel B passe a possuir o valor da vari�vel A. Apresentar os valores iniciais
e os valores finais de A e B*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){

int A, B, C;

printf("Entre com o valor de A: ");
scanf("%d", &A);
printf("Entre com o valor de B: ");
scanf("%d", &B);

C = B;
B = A;
A = C;

printf("O valor inicial de A: %d\n", B);
printf("O valor inicial de B: %d\n", A);
printf("O valor de A agora: %d\n", A);
printf("O valor de B agora: %d", B);

}
