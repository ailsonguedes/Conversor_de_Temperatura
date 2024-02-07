#include "./h_files/fahrenheit_conv.h"

#include <stdio.h>

void FahrenheitConv(float val) {
    float result_celsius;
    float result_kelvin;

    result_celsius = (val - 32) * 5 / 9;
    result_kelvin = (val + 459.67) * 5 / 9;

    printf("Temperatura em celsius: %.2f C\n", result_celsius);
    printf("Temperatura em kelvin: %.2f K\n", result_kelvin);
}
