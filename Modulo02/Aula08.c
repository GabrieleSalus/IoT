#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "");

    float temperatura;
    float tempCelsius;

    printf("****Conversor de temperatura\n");
    printf("Digite a temperatura em fehrenheit: ");
    scanf("%f", &temperatura);

    tempCelsius = (temperatura - 32.0) / 1.8;

    printf("Temperatura em %.2f °C", tempCelsius);

}