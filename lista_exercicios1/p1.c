#include <stdio.h>

int main (void)
{
    float number_a, number_b;
    
    printf("Digite o primeiro valor para que se calcule a média: \n");
    scanf("%f", &number_a);

    printf("Digite o segundo valor para que se calcule a média: \n");
    scanf("%f", &number_b);

    float media = (number_a * 3.5 + number_b * 7.5 ) / 11 ; 

    printf("A média ponderada entre %f e %f é: %.5f" , number_a, number_b, media);

    return 0;

}