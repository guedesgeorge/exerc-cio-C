#include <stdio.h>

int main()
{
    float salario_fixo, valor_vendas;
    float comissao, salario_final;

    printf("Digite o valor do salario fixo do funcionario: ");
    scanf("%f", &salario_fixo);

    printf("Digite o valor das vendas do funcionario: ");
    scanf("%f", &valor_vendas);

    // calculo sobre a comissão 

    comissao = valor_vendas * 0.04;

    salario_final = salario_fixo + comissao;

    // saida de dados 

    printf("comissão %.2f\n", comissao );
    printf("salario final %.2f\n", salario_final);

    return 0;
}
