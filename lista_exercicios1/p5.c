#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main (void)
{
    float raio_esfera, volume_esfera;
    printf("Digite o valor do seu Raio: \n");
    scanf("%f", &raio_esfera);

    volume_esfera =  (4.0 / 3) * PI * pow(raio_esfera, 3);

    printf("O cálculo do volume V da esfera de raio %.3f foi: %.3f u.v \n" , raio_esfera, volume_esfera);

    return 0;
}