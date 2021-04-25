#include<stdio.h>

int main()
{
    int i;

    //o for irá contar de 1 até 199 e o if irá
    //verificar quais numeros que divididos por 4
    //tem resto zero e imprimi-los na tela do usuario.
    for ( i = 1; i < 200; i++)
    {
        if ((i % 4) == 0)
        {
            printf("%d ", i);
        }
        
    }
    
    return 0;
}
