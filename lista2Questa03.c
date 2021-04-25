#include<stdio.h>

int main()
{
    int i, inferior, superior, soma;

    printf("Digite o primeiro numero da sequencia: ");
    scanf("%d", &inferior);
    printf("Digite o ultimo numero da sequencia: ");
    scanf("%d", &superior);

    //a variavel se inicia dentro do laço igual a zero.
    soma = 0;

    //quando informado um valor inferior e um valor superior
    //logo em sequencia o laço irá contar do valor inferior até
    //o valor superior e imprimir os valores pares em modo crescente
    // e a variavel soma irá somar todos os valores que satisfaçam a
    //condição declarada.
    for ( i = inferior; i <= superior; i++)
    {
        if ((i % 2) == 0)
        {
            printf("%d ", i);
            soma = soma + i;
        }
        
    }

    //é imprimido na tela do usuario a soma dos numeros pares.
    printf("\n\nSoma dos numeros pares: %d\n\n", soma);
    
    return 0;
}
