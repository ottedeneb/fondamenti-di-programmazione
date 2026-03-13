#include <stdio.h>

int main(){
    
    float temperatura_celsius, temperatura_fahrenheit, temperatura_kelvin;

    printf("Inserisci la temperatura in °C: ");

    scanf("%f", &temperatura_celsius);

    temperatura_fahrenheit = temperatura_celsius * 9/5 + 32;
    temperatura_kelvin = temperatura_celsius + 273.15;

    printf("Temperatura Fahrenheit: %.2f\nTemperatura Kelvin: %.2f\n", temperatura_fahrenheit, temperatura_kelvin);

    return 0;
}