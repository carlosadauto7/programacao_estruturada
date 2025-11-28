#include <stdio.h>

int main(void)
{
    double salario_inicial, salario_reajustado, valor_reajuste;
    float p1 = 1.20;
    float p2 = 1.15;
    float p3 = 1.10;

    printf("Digite o valor do seu salário para que possamos aplicar o reajuste: \n");
    scanf("%lf", &salario_inicial);

    if (salario_inicial < 1500) 
    {
        salario_reajustado = salario_inicial * p1;
        valor_reajuste = salario_reajustado - salario_inicial;
        printf("O novo salário fica no valor de %.2f reais, o valor do reajuste foi de %.2f reais com  o percentual de %.1f \n" , 
            salario_reajustado, valor_reajuste, (p1 - 1.0)*100);
    }
    else if (salario_inicial <= 5000)
    {
        salario_reajustado = salario_inicial * p2;
        valor_reajuste = salario_reajustado - salario_inicial;
        printf("O novo salário fica no valor de %.2f reais, o valor do reajuste foi de %.2f reais com  o percentual de %.1f \n" , 
            salario_reajustado, valor_reajuste, (p2 - 1.0)*100);
    }
    else
    {
    
        salario_reajustado = salario_inicial * p3;
        valor_reajuste = salario_reajustado - salario_inicial;
        printf("O novo salário fica no valor de %.2f reais, o valor do reajuste foi de %.2f reais com  o percentual de %.1f \n" , 
            salario_reajustado, valor_reajuste, (p3 - 1.0)*100);
    }
    
    return 0;
    
}