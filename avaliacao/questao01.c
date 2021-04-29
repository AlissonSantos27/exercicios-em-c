/*
1 - Fazer um programa que: dada a altura e peso de uma pessoa, calcule seu índice de 
massa corporal.
Fórmula: peso dividido por altura ao quadrado.
Faixas:
<= 18,5 - abaixo do peso normal;
> 18,5 e <= 25 - peso normal;
> 25 e <=30 - peso acima do normal;
acima de 30 - peso excessivo.
Fique lendo até atingir 4 pessoas com peso excessivo, ai imprima o total de pessoas de cada 
faixa de peso.
*/

//calculadora de indice de massa corporal que após 4 resultados de pessoas
//obesas imprime a quantidade de pessoas e suas faixas de peso.

#include <stdio.h>
#include <math.h>

int main()
{
    float altura, peso;
    int abaixoPeso = 0, pesoNormal = 0, acimaPeso = 0, obeso = 0;
    float massaCorporal;

    while (obeso != 4)
    {
        printf("\nDigite a altura da pessoa: ");
        scanf("%f", &altura);

        printf("Digite o peso da pessoa: ");
        scanf("%f", &peso);

        massaCorporal = peso / (altura * altura);

        if (massaCorporal <= 18.5)
        {
            abaixoPeso = abaixoPeso + 1;
        }
        else
        {
            if ((massaCorporal > 18.5) && (massaCorporal <= 25))
            {
                pesoNormal = pesoNormal + 1;
            }
            else
            {
                if ((massaCorporal > 25) && (massaCorporal <= 30))
                {
                    acimaPeso = acimaPeso + 1;
                }
                else
                {
                    if (massaCorporal > 30)
                    {
                        obeso = obeso + 1;
                    }
                    
                    
                }
                
            }
            
        }
        
    }

    printf("\n\nPessoas abaixo do peso: %d", abaixoPeso);
    printf("\nPessoas com o peso normal: %d", pesoNormal);
    printf("\nPessoas acima do peso normal: %d", acimaPeso);
    printf("\nPessoas com peso excessivo: %d\n\n", obeso);
    

    return 0;
}
