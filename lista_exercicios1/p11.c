#include <stdio.h>

int main(void)
{
    int numero1, numero2;
    int maior, menor;

    printf("Digite dois números inteiros, separados por espaço: \n");
    scanf("%d %d", &numero1, &numero2);

    if (numero1 > numero2)
    {
        maior = numero1;
        menor = numero2;
    }
    else
    {
        maior = numero2;
        menor = numero1;
    }

    int contador = 0;

    for (int i = menor + 1; i < maior; i++)
    {
        if(i % 2 != 0)
        {
            contador += i;
        }
    }

    printf("A soma  não inclusiva entre os números ímpares %d e %d é: %d \n"  , menor, maior, contador);

    return 0;
    
}