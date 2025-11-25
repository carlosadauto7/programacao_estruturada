#include <stdio.h>

int main(void)
{
    int x, y ;

    printf("Digite o valor da coordenada X: \n");
    scanf("%i", &x);


    printf("Digite o valor da coordenada Y: \n");
    scanf("%i", &y);

    if  (x > 0 && y > 0)
    {
        printf("As suas coordenadas se referem ao primeiro quadrante \n");
    }
    else if ( x < 0 && y > 0)
    {
        printf("As suas coordenadas se referem ao segundo quadrante quadrante \n");
    }
    else if (x < 0 && y < 0)
    {
        printf("As suas coordenadas se referem ao terceiro quadrante \n");
    }
    else
    {
        printf("As suas coordenadas se referem ao quarto quadrante \n");
    }
    return 0;
}