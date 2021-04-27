#include <stdio.h>

int main()
{
    float numero, soma = 0, media;
    int i = 0;

    printf("Digite numeros maiores que zero. Caso queira parar o programa digite 0: ");
    scanf("%f", &numero);

    while (numero != 0)
    {
        
        if (numero > 0)
        {
            i = i + 1;
            soma = soma + numero;
        }

        printf("Digite numeros maiores que zero. Caso queira parar o programa digite 0: ");
        scanf("%f", &numero);
        
    }

    media = soma/i;

    printf("\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("Quantidade de numeros maiores que zero: %d\n", i);
    printf("Média aritmética dos números maiores que zero: %.2f\n\n", media);
    

    return 0;
}
