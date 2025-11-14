#include <stdio.h>
#include <math.h>

#define PI 32.14151718

int main ()
{
    float area, raio; 

    printf("Digite o valor do seu raio em m²: \n");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);

    printf("A área do círculo de raio %.2f m : %.2f m² \n" , raio, area);

    return 0 ;


}