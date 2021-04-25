#include <stdio.h>

int main()
{

    float horaAula, inss, salarioBruto, aliquota, desconto, salarioFinal;
    int aulas;

    printf("\n               *** SALARIO LIQUIDO DO DOCENTE ***     \n\n");
    printf("Qual o valor da hora aula? ");
    scanf("%f", &horaAula);
    printf("Digite o numero de aulas dadas: ");
    scanf("%d", &aulas);
    printf("Digite a aliquota do INSS para a categoria [sem o sinal de %%]:");
    scanf("%f", &inss);
    salarioBruto = (horaAula * aulas);
    aliquota = inss/100;
    desconto = salarioBruto * aliquota;
    salarioFinal = (horaAula * aulas) - desconto;
    printf("Desconto INSS: R$ %.2f\n", desconto);
    printf("Salário líquido: R$ %.2f\n\n", salarioFinal);
    return 0;
}
