#include <stdio.h>

int main()
{

    int numero1, numero2, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);
    soma = numero1 + numero2;

    if (soma > 10)
    {
        printf("Soma: %d\n\n", soma);
    }
    

    return 0;
}
