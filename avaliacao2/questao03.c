/*
    3 – Cadastre uma matriz, 4X4 de forma que metade dos números são pares 
    e a outra metade sejam impares depois carregue esses números pares no 
    vetor par e os impares no vetor ímpar. (Valor 2.0)

    Entrada de dados:
    matriz[4][4] com 8 numeros pares e 8 numeros impares.

    processamento:
    - criar um for um dentro do outro para percorrer a matriz
    - se contador < 8 
        escreva (digite um numero)
        leia (numero)
        enquanto numero%2 != 0 {
        escreva (digite um numero)
        leia (numero)}
        matriz[linha][coluna] = numero
        vetorPar[contador1] = numero
        contador1++;
    - se contador >= 8
        escreva (digite um numero)
        leia (numero)
        enquanto numero%2 == 0 {
        escreva (digite um numero)
        leia (numero)}
        matriz[linha][coluna] = numero
        vetorImpar[contador2] = numero
        contador1++;
        contador2++;

    saída:
    - matriz com os valores pares e impares.
    - vetor com os valores pares.
    - vetor com os valores impares.



*/

#include <stdio.h>

int main()
{

    int mat[4][4];
    int vetorPar[8], vetorImpar[8];
    int numero, contador1 = 0, contador2 = 0;
    int linha, coluna, i;

    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            if ((contador1 >= 0) && (contador1 <= 8))
            {
                printf("Digite um numero para a posicao %d.%d da matriz: ", linha + 1, coluna + 1);
                scanf(" %d", &numero);

                while (numero % 2 != 0)
                {
                    printf("Digite um numero para a posicao %d.%d da matriz: ", linha + 1, coluna + 1);
                    scanf(" %d", &numero);
                    
                }
                mat[linha][coluna] = numero;
                vetorPar[contador1] = numero;
                contador1++;
            }

            if ((contador1 > 8) && (contador1 <= 16))
            {
                printf("Digite um numero para a posicao %d.%d da matriz: ", linha + 1, coluna + 1);
                scanf(" %d", &numero);

                while (numero % 2 == 0)
                {
                    printf("Digite um numero para a posicao %d.%d da matriz: ", linha + 1, coluna + 1);
                    scanf(" %d", &numero);
                    
                }
                mat[linha][coluna] = numero;
                vetorImpar[contador2] = numero;
                contador1++;
                contador2++;
            }
        }
    }

    printf("\n\n");
    for (linha = 0; linha < 4; linha++)
    {
        for (coluna = 0; coluna < 4; coluna++)
        {
            printf(" [%d] ", mat[linha][coluna]);
        }
        printf("\n");
    }

    printf("\nNumeros pares: \n");
    for (i = 0; i < 8; i++)
    {
        printf(" %d ", vetorPar[i]);
    }

    printf("\n");
    printf("Numeros impares: \n");
    for (i = 0; i < 8; i++)
    {
        printf(" %d ", vetorImpar[i]);
    }

    return 0;
}
