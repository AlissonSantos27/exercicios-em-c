#include <stdio.h>

int main()
{
    int hamburguer, cheeseSalada, fritas, refrigerante, milkShake, i;
    float chamb, cches, cfri, crefri, cmilk, soma;
    float totalHamburger, totalCheeseSalada, totalFritas, totalRefrigerante, totalMilkShake;
    float conta[3];

    for ( i = 0; i < 3; i++)
    {
        printf("\n\n==========================================\n");
        printf("            CONTA ");
        printf("\n==========================================");

        printf("\n\nDigite a quantidade de hamburgueres: ");
        scanf("%d", &hamburguer);

        printf("Digite o preço do produto: ");
        scanf("%f", &chamb);

        printf("Digite a quantidade de cheese salada: ");
        scanf("%d", &cheeseSalada);

        printf("Digite o preço do produto: ");
        scanf("%f", &cches);

        printf("Digite a quantidade de fritas: ");
        scanf("%d", &fritas);

        printf("Digite o preço do produto: ");
        scanf("%f", &cfri);

        printf("Digite a quantidade de refrigerantes: ");
        scanf("%d", &refrigerante);

        printf("Digite o preço do produto: ");
        scanf("%f", &crefri);

        printf("Digite a quantidade de milk shake: ");
        scanf("%d", &milkShake);

        printf("Digite o preço do produto: ");
        scanf("%f", &cmilk);

        totalHamburger = (float) hamburguer*chamb;

        totalCheeseSalada = (float) cheeseSalada * cches;

        totalFritas = (float) fritas * cfri;

        totalRefrigerante = (float) refrigerante * crefri;

        totalMilkShake = (float) milkShake * cmilk;

        soma = totalHamburger + totalCheeseSalada + totalFritas + totalRefrigerante + 
        totalMilkShake;

        conta[i] = soma;

    }

    printf("\n\nValor total da primeira conta: %.2f", conta[0]);
    printf("\nValor total da segunda conta: %.2f", conta[1]);
    printf("\nValor total da terceira conta: %.2f\n\n", conta[2]);
     
    return 0;
}
