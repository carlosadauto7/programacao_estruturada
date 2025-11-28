#include <stdio.h>

int main(void)
{
int numero_a, numero_b;
int maior, menor, soma;

printf("Digite dois números inteiros separados por espaço: \n");
scanf("%d %d", &numero_a, &numero_b);

    while (numero_a > 0 && numero_b > 0)  // repete enquanto ambos forem positivos
    {
        // define maior e menor corretamente
        if (numero_a > numero_b)
        {
            maior = numero_a;
            menor = numero_b;
        }
        else
        {
            maior = numero_b;
            menor = numero_a;
        }

        soma = 0;  // zera antes de somar

        for (int i = menor; i <= maior; i++)
        {
            soma += i;
        }

        printf("A soma dos números entre %d e %d é: %d \n", menor, maior, soma);

        // pede novamente
        printf("Digite dois números inteiros separados por espaço: \n");
        scanf("%d %d", &numero_a, &numero_b);
    }

    return 0;

}
