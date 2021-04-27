#include <stdio.h>

//urna eletronica

int main()
{
    int qtdVotos[3];
    int vencedor;
    int voto = 0, i, j;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, nulo = 0, branco = 0;
    int somaVotos = 0;
    float porcentagemNulos, porcentagemBrancos;

    printf("\n==========================================\n");
    printf("            -= URNA ELETRONICA =-         ");
    printf("\n==========================================\n\n");

    printf("1.Candidato Antônio José\n");
    printf("2.Candidato Francisco Carlos\n");
    printf("3.Candidato Raquel Nunes\n");
    printf("4.Nulo\n");
    printf("5.Branco\n");
    printf("\n\nEntre com o seu voto: ");
    scanf("%d", &voto);

while (voto != 6)
{
        switch (voto)
    {
    case 1:
        candidato1 = candidato1 + 1;
        break;

    case 2:
        candidato2 = candidato2 + 1;
        break;

    case 3:
        candidato3 = candidato3 + 1;
        break;

    case 4:
        nulo = nulo + 1;
        break;

    case 5:
        branco = branco + 1;
        break;

    default:
        printf("Voto Inválido\n");
    

    }

    somaVotos = somaVotos + 1;
    printf("Entre com o seu voto: ");
    scanf("%d", &voto);

}

qtdVotos[0] = candidato1;
qtdVotos[1] = candidato2;
qtdVotos[2] = candidato3;

porcentagemNulos = (((float) nulo/somaVotos)*100);
porcentagemBrancos = ((float)branco/somaVotos)*100;

printf("\n\nAntonio José: %d\n", qtdVotos[0]);
printf("Francisco Carlos: %d\n", qtdVotos[1]);
printf("Raquel Nunes: %d\n", qtdVotos[2]);
printf("Porcentagem de nulos: %.2f %%\n", (porcentagemNulos));
printf("Porcentagem de votos em branco: %.2f %%\n", porcentagemBrancos);

for ( i = 0; i < 3; i++)
{
    for ( j = 0; j < 3; j++)
    {
        if (qtdVotos[i] > qtdVotos[j])
        {
            vencedor = qtdVotos[i];
        }
        
    }
    
}


if (vencedor == qtdVotos[0])
{
    printf("Vencedor: Antonio José\n");
}
else
{
    if (vencedor == qtdVotos[1])
    {
        printf("Vencedor: Francisco Carlos\n");
    }
    else
    {
        if (vencedor == qtdVotos[2])
        {
            printf("Vencedor: Raquel Nunes\n");
        }
        
    }
    
}





    return 0;
}
