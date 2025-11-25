#include <stdio.h>

int main(void)
{
    int opcao_usuario;

    printf("1 - SUBTRAIR \n");
    printf("2 - SOMAR \n");
    printf("3 - SAIR DO PROGRAMA \n");
    printf("Digite a sua opção desejada: \n");
    scanf("%d", &opcao_usuario);

    do 
    {
        switch (opcao_usuario)
        {
        case 1:
            printf("SUBTRAIR FOI ESCOLHIDO \n");
            break;
        case 2 :
            printf("SOMAR FOI ESCOLHIDO: \n");
            break;
        case 3:
            printf("SAIR DO PROGRAMA FOI ESCOLHIDO");
            break;
        
        default:
        printf("DIGITE UMA OPÇÃO VÁLIDA: \n");
            break;
        }
    } while (opcao_usuario != 3);

    return 0;
    
}