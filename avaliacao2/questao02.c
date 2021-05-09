/*
    2 – Dado um vetor de 10 posições inverta seus valores. E o imprima. (Valor 2.0)

    entrada de dados:
    vetor de 10 posicoes vet1[10].

    processamento:
    int j = 0;
    para i de 9 ate 0 passo -1{
        vet2[j] = vet1[i];
        j++;
    }

    saida de dados:
    imprime vetor de 10 posicoes vet1[10] ao contrario no vetor vet2[10];
*/

#include <stdio.h>

int main()
{
    float vet1[10], vet2[10];
    int i, j =0;
    float numero;

    for ( i = 0; i < 10; i++)
    {
        printf("Digite o %do numero: ", i+1);
        scanf(" %f", &numero);
        vet1[i] = numero;
    }

    for ( i = 9; i >= 0; i--)
    {
        vet2[j] = vet1[i];
        j++;
    }

    printf("\n");

    for ( i = 0; i < 10; i++)
    {
        printf("[%5.2f]", vet2[i]);
    }
    
    
    
    return 0;
}


