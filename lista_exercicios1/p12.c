#include <stdio.h>

int main(void)
{
    int numero_usuario;
    printf("Digite um número inteiro para calcularmos a sua tabuada de 1 até 20: \n");
    scanf("%d" , &numero_usuario);

    int i = 0;

    printf("A sua tabuada do número %d está logo abaixo. \n" , numero_usuario);

    for (i ; i < 21; i++)
    {
        printf("%d x %d = %d \n" , numero_usuario, i, numero_usuario * i );
    }

    return 0;
}