#include <stdio.h>

int main(void)
{
    int minha_senha = 123;
    int senha_user; 
    int contador_tentativas = 0;

    while (contador_tentativas < 4)
    {
        printf("Digite a sua senha: \n ");
        scanf("%d", &senha_user);

        if (minha_senha == senha_user)
        {
            printf("Sua senha está correta \n");
            break;

        }
        else
        {
            printf("Sua senha está incorreta. Tente novamente \n");
            contador_tentativas++;

        }
    }

    return 0;
}