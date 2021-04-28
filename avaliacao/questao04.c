#include <stdio.h>

int main()
{
    float produto, lucro, venda;

    printf("\n\nDigite o valor da compra do produto: ");
    scanf("%f", &produto);

    if (produto < 20)
    {
        lucro = produto * 0.45;
    }
    else
    {
        lucro = produto * 0.30;
    }

    venda = produto + lucro;
    printf("\nValor da venda: %.2f\n\n", venda);
    
    return 0;
}
