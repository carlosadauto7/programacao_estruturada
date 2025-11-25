#include <stdio.h>

int main(void)
{
    int velocidade_a = 60;
    int velocidade_b = 90;
    int velocidade_relativa = velocidade_a + velocidade_b;
    int distancia_entre_veiculos;

    printf("Digite a distância em KM que separam os dois veículos: \n");
    scanf("%i", &distancia_entre_veiculos);

    float tempo_minutos = (distancia_entre_veiculos / velocidade_relativa) * 60 ;

    printf("Será necessário %.1f minutos para que os veículos se encontrem\n" , tempo_minutos);

    return 0;

}