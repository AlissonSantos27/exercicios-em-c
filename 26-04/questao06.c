/*
    6 - Faça um programa que, para um número indeterminado de pessoas: leia a idade de cada
uma, sendo que a idade 0 (zero) indica o fim da leitura e não deve ser considerada. A seguir
calcule:
• o número de pessoas;
• a idade média do grupo;
• a menor idade e a maior idade

    int idade, pessoas = 0, menorIdade = 999, maiorIdade = -1
    float mediaIdade, somaIdade

    escreva (Digite a idade da pessoa)
    leia (idade)

    enquanto (idade != 0)
    {
        se (idade > 0){
            pessoas++
            somaIdade += idade

            se (menorIdade > idade ){
            menorIdade = idade
            }

            se (maiorIdade < idade){
            maiorIdade = idade
            }

            escreva (Digite a idade da pessoa)
            leia (idade)
        }
        

        
    }

    mediaIdade = somaIdade / pessoas

    escreva pessoas
    escreva mediaIdade
    escreva menorIdade
    escreva maiorIdade
*/

#include <stdio.h>

int main()
{
    int idade, pessoas = 0, menorIdade = 999, maiorIdade = -1;
    float somaIdade = 0, mediaIdade;

    printf("Digite a idade da pessoa: ");
    scanf(" %d", &idade);

    while (idade != 0)
    {
        if (idade > 0)
        {
            pessoas++;
            somaIdade += idade;

            if (menorIdade > idade)
            {
                menorIdade = idade;
            }
            if (maiorIdade < idade)
            {
                maiorIdade = idade;
            }
            
            
        }

        printf("Digite a idade da pessoa: ");
        scanf(" %d", &idade);
        
    }


    mediaIdade = somaIdade / (float) pessoas;

    printf("\nQuantidade de pessoas: %d", pessoas);
    printf("\nA idade media do grupo é: %.2f", mediaIdade);
    printf("\nA menor idade é: %d", menorIdade);
    printf("\nA maior idade é: %d\n\n", maiorIdade);

    return 0;
}
