#include <stdio.h>

int main(void)
{
    int n;
    int x, y;

    printf("Digite a quantidade de pares: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite o %d° par de números.\n ", i + 1);
        scanf("%d %d", &x, &y);

        if ( y == 0)
        {
            printf("Impossível dividir\n");
        }
        else
        {
            printf("%.2f\n", (float)x / y);
        }
    }

    return 0;

}
