#include <stdio.h>

int main()
{
    int senha = 1234, entrada;

    printf("Digite sua senha: ");
    scanf("%d", &entrada);

    while (entrada != senha)
    {
        printf("\nSenha incorreta. Digite novamente: ");
        scanf("%d", &entrada);
    }

    printf("\nSenha correta!\n\n");
    
    return 0;
}
