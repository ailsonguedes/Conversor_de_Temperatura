#include "./h_files/celsius_conv.h"

#include <stdio.h>

void CelsiusConv(float val) {
    float result_fahrenheit;
    float result_kelvin;

    result_fahrenheit = (val * 9) / 5 + 32;
    result_kelvin = val + 273.15;

    printf("Temperatura em fahrenheit: %.2f ºF\n", result_fahrenheit);
    printf("Temperatura em Kelvin: %.2f K\n", result_kelvin);
}
