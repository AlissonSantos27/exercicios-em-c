#include <stdio.h>

int main()
{
    float numero, somatorio = 0, media;
    int contador = 0;

    //para que o while funcione corretamente é necessário através do teclado 
    //informar um valor fora do laço para que o while execute o teste logico.
    printf("Digite um numero: ");
    scanf("%f", &numero);

    while (numero > 0)
    {

        //os numeros informados serão somados e armazenados
        //na variável somatorio.
        somatorio += numero;

        //para cada numero positivo informado será somado
        //mais um na variavel contador.
        contador += 1;

        printf("Digite um numero: ");
        scanf("%f", &numero);
        
    } 

    //calculo e armazenamento do resultado da media aritmetica 
    //dos valores informados.
    media = somatorio/contador;

    //informações que serão imprimidas em tela para o usuario.
    printf("\n\nSoma dos valores positivos informados: %.2f\n", somatorio);
    printf("Média aritmética dos valores positivos informados: %.2f\n", media);
    printf("Quantidade de valores positivos informados: %.2d\n\n", contador);

    
    return 0;
}
