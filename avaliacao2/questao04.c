/*
    4 – Cadastre uma matriz 5 X 5 e calcule a soma da diagonal principal 
    e diagonal secundaria sendo que, o valor da intersecção das 2 diagonais 
    seja somado 1 única vez. (Valor 2.0).

    entrada de dados:
    matriz[5][5]

    processamento:
    diagonal principal --> linha = coluna
    for (i = 0; i < 5; i++)
    {
        somaPrincipal += mat[i][i];
    }

    diagonal secundaria --> linha + coluna = (matriz de ordem n - 1)
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if ((i+j == 4))
            {
                somaSecundaria += mat[i][j];
            }
            
        }
        
    }
     somaDiagonais = (somaPrincipal + somaSecundaria) - mat[2][2];

     saida:
     escreva("A soma das diagonais é %d ", somaDiagonais)


*/

#include <stdio.h>

int main()
{
    
    int mat[5][5];
    int linha, coluna, numero, i, j;
    int somaPrincipal, somaSecundaria, somaDiagonais;

    for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            printf("Digite o valor do vetor na posição %d.%d: ", linha+1, coluna+1 );
            scanf(" %d", &numero);
            mat[linha][coluna] = numero;
            
        }
        
    }

    system("clear");

     for (linha = 0; linha < 5; linha++)
    {
        for (coluna = 0; coluna < 5; coluna++)
        {
            printf(" [%d] ", mat[linha][coluna]);
            
        }
        printf("\n");
    }

    for (i = 0; i < 5; i++)
    {
        somaPrincipal += mat[i][i];
    }
    
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if ((i+j == 4))
            {
                somaSecundaria += mat[i][j];
            }
            
        }
        
    }
    
    somaDiagonais = (somaPrincipal + somaSecundaria) - mat[2][2];

    printf("\nA soma das diagonais é %d ", somaDiagonais);

    return 0;
}

