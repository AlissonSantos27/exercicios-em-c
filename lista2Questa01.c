#include <stdio.h>


int main()
{
    int i, soma, numero;

    //O for irá imprimir os numeros de 1 a 100 e somá-los a uma variavel
    printf("\n\n");
    for ( i = 1; i <= 100; i++)
    {
        printf(" %d ", i);
        numero = i;
        soma += numero;
    }

    printf("\n\nA soma dos numeros é %d\n\n", soma);
    
    return 0;
}
