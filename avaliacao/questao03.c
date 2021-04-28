#include <stdio.h>

int main()
{
    int id, idade;
    float peso;
    char alimentado, resfriado;
    int aptos = 0, inaptos = 0, i;

    for ( i = 1; i <= 10; i++)
    {
        printf("====================================\n");
        printf("           DOADOR %d\n", i);
        printf("====================================");

        printf("\n\nCadastre o codigo de doador: ");
        scanf("%d", &id);

        printf("Idade do doador: ");
        scanf("%d", &idade);

        printf("Peso do doador: ");
        scanf("%f", &peso);
 
        printf("O doador está bem alimentado? [s/n]: ");
        scanf(" %c", &alimentado);

        printf("O doador está resfriado? [s/n]: ");
        scanf(" %c", &resfriado);

        printf("\nID do doador: %d\n", id);

            if ((idade >= 16) && (idade <= 69) && (peso >= 50) && (alimentado == 's') && 
            (resfriado == 'n'))
            {
                printf("O voluntario está apto.\n\n");
                aptos = aptos + 1;

            }
             else
            {       
                printf("O voluntario não está apto.\n\n");
                inaptos = inaptos + 1;
            }

    }
    

    printf("Quantidades de aptos: %d\n", aptos);
    printf("Quantidade de não aptos: %d\n\n", inaptos);
    
    
    return 0;
}
