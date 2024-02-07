#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "./src/h_files/celsius_conv.h"
#include "./src/h_files/fahrenheit_conv.h"
#include "./src/h_files/help_func.h"
#include "./src/h_files/kelvin_conv.h"

float val;
int argC;

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
