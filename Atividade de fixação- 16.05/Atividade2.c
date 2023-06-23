#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

void realizarOperacoes(Horario *horario) {
    horario->hora += 100;
    horario->minutos += horario->hora;
    horario->segundos += horario->minutos;
}

int main() {
    Horario horario = {20, 30, 40}; // Valores predefinidos

    Horario *pontHorario = &horario;

    printf("Horario inicial: %02d:%02d:%02d\n", pontHorario->hora, pontHorario->minutos, pontHorario->segundos);

    realizarOperacoes(pontHorario);

    printf("Horario apos operacoes: %02d:%02d:%02d\n", pontHorario->hora, pontHorario->minutos, pontHorario->segundos);

    return 0;
}
