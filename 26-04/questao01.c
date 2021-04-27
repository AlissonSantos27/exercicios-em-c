# include <stdio.h>

int main()
{
    int numero;

    printf("\n\n++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("                       DISTRIBUIDORA DE BEBIDAS                         \n");
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("\n\nEscolha uma das opções abaixo [1/0]\n\n");
    printf("Água sem gás .............................................................1");
    printf("\nÁgua com gás .............................................................0\n\n");
    scanf("%d", &numero);

    
    while ((numero != 0) && (numero != 1))
        {
            printf("Valor inválido. Digite novamente\n");
            scanf("%d", &numero);
        }

    if (numero == 0)
    {
        printf("\nÁgua com gás\n\n");
    }
    else
    {
        printf("\nÁgua sem gás\n\n");
    }
    
    



    return 0;
}
