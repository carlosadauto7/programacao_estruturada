#include <stdio.h>

int main (void)
{
    int numero_campeonatos;

    printf("Escolha uma opção entre 1 a 4 para definir quantos campeonatos seu time ganhou: \n");
    scanf("%d", &numero_campeonatos);

    switch (numero_campeonatos)
    {
        case 1:
            printf("Seu time é campeão brasileiro\n");
            break;
        case 2:
            printf("Seu time é bi-campeão brasileiro\n");
            break;
        case 3:
            printf("Seu time é tri-campeão brasileiro\n");
            break;
        case 4 :
            printf("Seu time é tetra-campeão brasileiro\n");
            break;
        default:
            printf("Insira uma opção válida entre 1 e 4 \n");
            break;

    }
    return 0;
}