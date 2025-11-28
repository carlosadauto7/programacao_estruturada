#include <stdio.h>

int main() {
    int hi, mi; // hora e minuto inicial
    int hf, mf; // hora e minuto final
    int inicio, fim, duracao;
    int horas, minutos;

    printf("Hora e minuto inicial: ");
    scanf("%d %d", &hi, &mi);

    printf("Hora e minuto final: ");
    scanf("%d %d", &hf, &mf);

    // converter tudo para minutos
    inicio = hi * 60 + mi;
    fim = hf * 60 + mf;

    // se o fim for menor, passou da meia-noite
    if (fim < inicio) {
        fim += 24 * 60; // adiciona 1440 minutos
    }

    // duração total em minutos
    duracao = fim - inicio;

    // converter de volta
    horas = duracao / 60;
    minutos = duracao % 60;

    printf("O jogo durou %d hora(s) e %d minuto(s).\n", horas, minutos);

    return 0;
}
