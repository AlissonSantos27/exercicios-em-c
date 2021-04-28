#include <stdio.h>

int main()
{
    int id, idade;
    float peso;
    int alimentado, resfriado, aptos = 0, inaptos = 0, i;

    for ( i = 1; i <= 10; i++)
    {
        printf("====================================\n");
        printf("          %d DOADOR \n", i);
        printf("====================================");

        printf("\n\nCadastre o codigo de doador: ");
        scanf("%d", &id);

        printf("Idade do doador: ");
        scanf("%d", &idade);

        printf("Peso do doador: ");
        scanf("%f", &peso);
 
        printf("O doador está bem alimentado? Digite 1 pra sim e 0 pra não: ");
        scanf("%d", &alimentado);

        printf("O doador está resfriado? Digite 1 pra sim e 0 pra não: ");
        scanf("%d", &resfriado);

        printf("\nID do doador: %d\n", id);

            if ((idade >= 16) && (idade <= 69) && (peso >= 50) && (alimentado == 1) && 
            (resfriado == 0))
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
