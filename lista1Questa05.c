#include <stdio.h>

int main()
{
    int horas, minutos;
    float velocidadeMedia, distanciaPercorrida;

    /* code */
    printf("\n======== Digite o tempo gasto do veículo ================ \n\n");
    printf("Horas gastas: ");
    scanf("%d", &horas);
    printf("Minutos gastos: ");
    scanf("%d", &minutos);
    printf("Velocidade média durante o percurso em km: ");
    scanf("%f", &velocidadeMedia);
    printf("Informe a distancia percorrida em km: ");
    scanf("%f", &distanciaPercorrida);


    return 0;
}
