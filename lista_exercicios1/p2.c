#include <stdio.h>

int main (void)
{
    int distancia_percorrida;
    float combustivel_gasto;

    printf("Digite quantos KM você percorreu no seu carro para calcularmos o consumo médio: \n");
    scanf("%i", &distancia_percorrida);

    printf("Digite quantos litros de combustível você gastou neste percurso: \n");
    scanf("%f", &combustivel_gasto);

    float consumo_medio = distancia_percorrida / combustivel_gasto;

    printf("O consumo médio do seu carro foi %.3f Km/l" , consumo_medio);

    return 0;

}