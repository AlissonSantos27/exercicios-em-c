/*Programa para uma pesquisa de habitantes de uma região*/

#include <stdio.h>

int main()
{
    char sexo, menorSexo;
    int idade = 999, mulheres = 0, idadeMenorSalario = 999, maiorIdade = 0, menorIdade = 999;
    float salario, mediaSalario, somaSalario = 0, menorSalario = 999999, maiorSalario = 0;
    int contador = 0;

    while (idade >= 0)
    {
        printf("Digite a idade do entrevistado: ");
        scanf(" %d", &idade);

        if (idade <= 0)
        {
            break;
        }

           if (idade > maiorIdade)
        {
            maiorIdade = idade;
        }
        
        if (idade < menorIdade)
        {
            menorIdade = idade;
        }
   
        printf("Digite M para masculino e F para feminino: ");
        scanf(" %c", &sexo);

        if (sexo == 'F')
        {
            mulheres = mulheres + 1;
        }
   
        printf("Digite o salario do entrevistado: ");
        scanf(" %f", &salario);

         if (maiorSalario < salario)
        {
            maiorSalario = salario;
        }

         if (menorSalario > salario)
        {
            menorSalario = salario;
            idadeMenorSalario = idade;
            menorSexo = sexo;

        }

        somaSalario = somaSalario + salario;
        contador = contador + 1;
        printf("\n***O programa pode ser finalizado ao digitar uma idade negativa***\n\n");  

    }
 
    mediaSalario = somaSalario / (float) contador;

    printf("\n\nA media dos salarios é %.2f\n", mediaSalario);
    printf("A maior idade é %d e a menor idade é %d\n", maiorIdade, menorIdade);
    printf("A quantidade de mulheres na região é de %d\n", mulheres);
    printf("A idade e o sexo da pessoa que possui o menor \n");
    printf("salario é de %d anos e é do sexo %c \n", idadeMenorSalario, sexo);
    

    return 0;
}
