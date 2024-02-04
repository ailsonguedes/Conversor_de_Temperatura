#include <stdio.h>
#include <string.h>

float val;
int argC;
char arg[50];

void CelsiusConv(float val){
  float result_fahrenheit;
  float result_kelvin;

  result_fahrenheit = (val * 9/5) + 32;
  result_kelvin = val + 273.15;

  printf("Temperatura em fahrenheit: %.2f ºF\n", result_fahrenheit);
  printf("Temperatura em Kelvin: %.2f K\n", result_kelvin);
}

void FahrenheitConv(float val){
  float result_celsius;
  float result_kelvin;

  result_celsius = (val - 32) * 5/9;
  result_kelvin = (val + 459.67) * 5/9;

  printf("Temperatura em celsius: %.2f C\n", result_celsius);
  printf("Temperatura em kelvin: %.2f K\n", result_kelvin);
}

void KelvinConv(float val){
  float result_celsius;
  float result_fahrenheit;

  result_celsius = val - 273.15;
  result_fahrenheit = val * 9/5 - 459.67;

  printf("Temperatura em celsius: %.2f C\n", result_celsius);
  printf("Temperatura em fahrenheit: %.2f ºF\n", result_fahrenheit);
}

void help(){
  printf("Conversor de Temperatura\n");
  printf("---------------------------\n");
  printf("Uso: [temperatura] [argumento]\n\n");

  printf("Argumentos:\n");
  printf("  -c || --celsius\t\tConverte de Celsius para Fahrenheit e Kelvin\n");
  printf("  -f || --fahrenheit\t\tConverte de Fahrenheit para Celsius e Kelvin\n");
  printf("  -k || --kelvin\t\tConverte de Kelvin para Celsius e Fahrenheit\n");
  printf("  -h || --help\t\t\tMostra a tela de ajuda\n\n");
}

int main(int argc, char *argv[]){
  
  printf("  Conversor de Temperatura v1.0\n\n");
  printf("  Autor: Ailson Guedes\n\n");
  printf("  Você pode utilizar o valor 0 e o argumento -h ou --help para acessar o menu de ajuda.\n\n");

  printf(">>>>convshell: ");
  scanf("%f %s", &val, &arg);
  printf("\n");
  
  if (strcmp(arg,"-c") == 0 || strcmp(arg, "--celsius") == 0){
    argC = 1;
  } else if (strcmp(arg, "-f") == 0 || strcmp(arg, "--fahrenheit") ==0 ){
    argC = 2;
  } else if (strcmp(arg, "-k") == 0 || strcmp(arg, "--kelvin") ==0 ){
    argC = 3;
  } else if (strcmp(arg, "-h") == 0 || strcmp(arg, "--help") ==0 ){
    argC = 4;
  } else {
    argC = 0;
  }

  switch ( argC ){
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
