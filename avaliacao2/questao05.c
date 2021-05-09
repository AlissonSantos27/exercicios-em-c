/*
    5 – Cadastre um vetor de 10 posições com seus valores pares e após 
    os números impares quantos números foram necessários para cadastrar. (Valor 2.0)

    entrada de dados:
    vetor de 10 posições com numeros pares e impares

    processamento:
    enquanto i < 5{
        leia(digite um numero)
        escreva(numero)
        se numero%2 == 0{
            vetor[i] = numero
            i++;
        }

    }
    enquanto i > 5 && < 10{
        leia(digite um numero)
        escreva(numero)
        se numero%2 != 0{
            vetor[i] = numero
            i++;
        }
    }

    saida:
    vetor de 10 posições com 5 numeros pares e 5 numeros impares.
*/

#include <stdio.h>

int main()
{
  int i = 0;
  int numero;
  int vet[10];

    while (i < 5)
    {
        printf("Digite o %do numero da sequencia: ", i+1);
        scanf("%d", &numero);
        
        if (numero%2 == 0)
        {
            vet[i] = numero;
            i++;
        }
        
    }

    while ((i >= 5) && (i < 10))
    {
        printf("Digite o %do numero da sequencia: ", i+1);
        scanf("%d", &numero);

        if (numero%2 != 0)
        {
            vet[i] = numero;
            i++;
        }
        
    }
    

    for ( i = 0; i < 10; i++)
    {
        printf("\n%d", vet[i]);
    }
    
    

    return 0;
}
