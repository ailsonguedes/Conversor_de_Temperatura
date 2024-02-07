#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float val;
int argC;

void CelsiusConv(float val) {
    float result_fahrenheit;
    float result_kelvin;

    result_fahrenheit = (val * 9) / 5 + 32;
    result_kelvin = val + 273.15;

    printf("Temperatura em fahrenheit: %.2f ºF\n", result_fahrenheit);
    printf("Temperatura em Kelvin: %.2f K\n", result_kelvin);
}

void FahrenheitConv(float val) {
    float result_celsius;
    float result_kelvin;

    result_celsius = (val - 32) * 5 / 9;
    result_kelvin = (val + 459.67) * 5 / 9;

    printf("Temperatura em celsius: %.2f C\n", result_celsius);
    printf("Temperatura em kelvin: %.2f K\n", result_kelvin);
}

void KelvinConv(float val) {
    float result_celsius;
    float result_fahrenheit;

    result_celsius = val - 273.15;
    result_fahrenheit = val * 9 / 5 - 459.67;

    printf("Temperatura em celsius: %.2f C\n", result_celsius);
    printf("Temperatura em fahrenheit: %.2f ºF\n", result_fahrenheit);
}

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

int main(int argc, char *argv[]) {
    printf("  Conversor de Temperatura v1.0\n\n");
    printf("  Autor: Ailson Guedes\n\n");
    printf(
        "  Você pode utilizar o valor 0 e o argumento -h ou --help para acessar o menu de "
        "ajuda.\n\n");

    sscanf(argv[2], "%f", &val);

    if (strcmp(argv[1], "-c") == 0 || strcmp(argv[1], "--celsius") == 0) {
        argC = 1;
    } else if (strcmp(argv[1], "-f") == 0 || strcmp(argv[1], "--fahrenheit") == 0) {
        argC = 2;
    } else if (strcmp(argv[1], "-k") == 0 || strcmp(argv[1], "--kelvin") == 0) {
        argC = 3;
    } else if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0) {
        argC = 4;
    } else {
        argC = 0;
    }

    switch (argC) {
        case 1:
            CelsiusConv(val);
            break;

        case 2:
            FahrenheitConv(val);
            break;

        case 3:
            KelvinConv(val);
            break;

        case 4:
            help();
            break;

        default:
            printf("Argumento inválido!\n");
    }

    return 0;
}
