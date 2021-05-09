/*
    1 – Preencha um vetor de 10 posições somente com números pares positivos.(Valor 2.0)
    Se (num % 2 == 0) positivo

   Entrada de dados:
    vetor de 10 posições somente com Números pares e positivos.


    Processamento:
    Se(num >=0) && (num%2 == 0)


    Saída de dados:
    Imprime vetor de 10 posições.
*/

#include <stdio.h>

int main()
{
    int vet[10];
    int contador = 0, numero = 0;
    int i;

    while (contador < 10)
    {

        printf("Digite um numero: ");
        scanf(" %d", &numero);
        if ((numero >= 0) && (numero % 2 == 0))
        {
            vet[contador] = numero;
            contador++;
        }
    }

    printf("\n\nOs 10 numeros pares positivos digitados foram: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("\n%d", vet[i]);
    }
    

    return 0;
}
