/* Fa�a um algoritmo que leia o c�digo de um piloto, uma dist�ncia percorrida em km e o tempo que o piloto
levou para percorr�-la (em horas).
O programa deve calcular a velocidade m�dia - Velocidade = Dist�ncia / Tempo - em km/h, e
exibir a seguinte frase: A velocidade m�dia do <c�digo do piloto> foi <velocidade media calculada> km/h*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

main(){

float dist, tempo, vm, cod;

printf("Entre com o codigo do piloto: ");
scanf("%f", &cod);
printf("Entre com a distancia percorrida em Km: ");
scanf("%f", &dist);
printf("Entre com o tempo em horas: ");
scanf("%f", &tempo);

vm = dist / tempo;

printf("A velocidade media do %0.0f foi %0.2f km/h", cod, vm);

}
