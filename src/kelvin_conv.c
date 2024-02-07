#include "./h_files/kelvin_conv.h"

#include <stdio.h>

void KelvinConv(float val) {
    float result_celsius;
    float result_fahrenheit;

    result_celsius = val - 273.15;
    result_fahrenheit = val * 9 / 5 - 459.67;

    printf("Temperatura em celsius: %.2f C\n", result_celsius);
    printf("Temperatura em fahrenheit: %.2f ºF\n", result_fahrenheit);
}
