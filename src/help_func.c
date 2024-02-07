#include "h_files/help_func.h"

#include <stdio.h>

void help() {
    printf("Conversor de Temperatura\n");
    printf("---------------------------\n");
    printf("Uso: [argumento] [temperatura]\n\n");

    printf("Argumentos:\n");
    printf("  -c || --celsius\t\tConverte de Celsius para Fahrenheit e Kelvin\n");
    printf("  -f || --fahrenheit\t\tConverte de Fahrenheit para Celsius e Kelvin\n");
    printf("  -k || --kelvin\t\tConverte de Kelvin para Celsius e Fahrenheit\n");
    printf("  -h || --help\t\t\tMostra a tela de ajuda\n\n");
}
