#include <stdio.h>

int main()
{
    int idade = 1;
    int somaPessoas = 0;
    int somaIdade = 0;
    int idadeArmazenada[1000];
    int i = 0;
    
    while (idade == 0)
    {
        printf("Digite a idade de uma pessoa: ");
        scanf("%d", &idade);
        i = i + 1;
        idadeArmazenada[i] = idade;
        somaPessoas = somaPessoas + idade;
        somaIdade = somaIdade + 1;
    }
    
    return 0;
}
