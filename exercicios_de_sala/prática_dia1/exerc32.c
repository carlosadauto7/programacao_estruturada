#include <stdio.h>

int main(void)
{
    int senha = 123;
    int senha_user = 0;

    do 
    {
        printf("Digite a sua senha: \n");
        scanf("%d", &senha_user);

    } while (senha_user != senha);

    printf("Logib efetuado: \n");

    return 0;
}