/* Escrever um algoritmo para ler dois n�meros inteiros e exibir
a soma, a diferen�a e o produto dos mesmos.
A sa�da deve mostrar os operandos, o operador e o resultado de cada opera��o*/
#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

main(){

int num1, num2, soma, dif, prod;

printf("Entre com o numero 1: ");
scanf("%d", &num1);
printf("Entre com o numero 2: ");
scanf("%d", &num2);

soma = num1 + num2;
dif = num1 - num2;
prod = num1 * num2;

printf("A soma: %d\n", soma);
printf("A diferenca: %d\n", dif);
printf("O produto: %d\n", prod);
}
