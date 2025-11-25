#include <stdio.h>

int main(void)
{
    int tempo_horas, tempo_minutos, tempo_segundos, resto_divisao;
    printf("Digite o valor de um tempo em segundos e veja, em seguida, a sua conversão: \n");
    scanf("%i", &tempo_segundos);

    tempo_horas = tempo_segundos / 3600;
    resto_divisao = tempo_segundos % 3600;
    tempo_minutos = resto_divisao / 60;
    tempo_segundos = resto_divisao % 60;

    printf("A hora convertida é: %ih:%i min:%i sec \n" ,  tempo_horas, tempo_minutos, tempo_segundos );

    return 0 ;

}