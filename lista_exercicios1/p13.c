#include <stdio.h>

int main(void)
{
    int numero, maior;
    int posicao = 1;
    int i = 2;

    printf("Digite o número 1/10 para verificarmos qual é o maior da sequência e qual a sua posição de digitação:  \n");
    scanf("%d" ,  &maior);

    for ( i ; i <= 10; i++)
    {
        printf("Digite o número %d/10 para verificarmos qual é o maior da sequência e qual a sua posição de digitação:  \n" , i);
        scanf("%d" , &numero);

        if ( numero > maior)
        {
            maior = numero;
            posicao = i;
        }
    }
    
    printf("O maior número digitado foi %d e a sua ordem de digitação foi: %d ° posição\n"  , maior, posicao);

    return 0;

}