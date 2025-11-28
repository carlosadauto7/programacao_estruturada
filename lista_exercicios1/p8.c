#include <stdio.h>

int main(void)
{
    int tempo_hora_i, tempo_minuto_i;
    int tempo_hora_f, tempo_minuto_f;
    int inicio, fim, duracao;
    int hora_dur, min_dur;

    printf("Digite qual a hora e minuto do início do seu jogo: \n");
    scanf("%d %d", &tempo_hora_i, &tempo_minuto_i);

    printf("Digite qual a hora e minuto do fim do seu jogo: \n");
    scanf("%d %d", &tempo_hora_f, &tempo_minuto_f);

    inicio = (tempo_hora_i * 60 ) + tempo_minuto_i;
    fim = (tempo_hora_f * 60 ) + tempo_minuto_f;

    if (inicio > fim ){
        fim += 1440;
    }

    duracao = fim - inicio;

    hora_dur = duracao / 60;
    min_dur = duracao % 60;

    printf("O seu jogo durou %d hora(s) e %d minuto(s)"  ,  hora_dur, min_dur);

    return 0;

}