/* Faça um algoritmo que leia o código de um piloto, uma distância percorrida em km e o tempo que o piloto
levou para percorrê-la (em horas).
O programa deve calcular a velocidade média - Velocidade = Distância / Tempo - em km/h, e
exibir a seguinte frase: A velocidade média do <código do piloto> foi <velocidade media calculada> km/h*/
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
