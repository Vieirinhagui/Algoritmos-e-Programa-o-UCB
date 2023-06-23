#include <stdio.h>

typedef struct {
    int hora;
    int minutos;
    int segundos;
} Horario;

int main() {
    Horario horario = {20, 20, 20}; // Valores predefinidos

    Horario *pontHorario = &horario;

    printf("Horario: %02d:%02d:%02d\n", pontHorario->hora, pontHorario->minutos, pontHorario->segundos);

    return 0;
}