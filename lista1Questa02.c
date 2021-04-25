#include<stdio.h>

int main()
{
    int numero, sucessor, antecessor;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    antecessor = numero -1;
    sucessor = numero++;
    printf("%d é antecessor e %d é sucessor de %d", antecessor, sucessor, numero);

    return 0;
}
