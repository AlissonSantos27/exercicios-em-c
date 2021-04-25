#include <stdio.h>

int main()
{

    float numero;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if (numero > 20)
    {
        printf("Maior que 20\n\n");
    } 
    else
    {
        if(numero == 20)
        {
            printf("Igual a 20\n\n");
        }
        else
        {
            if(numero < 20)
            {
                printf("Menor que 20\n\n");
            }
        }
    }
       
    /* code */
    return 0;
}
