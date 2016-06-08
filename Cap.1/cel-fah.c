//Programa que imprime una tabla de Celsius-Fahrenheit
#include <stdio.h>
#define LOWER -40
#define UPPER 260
#define STEP 20

int main()
{
    int cel;
    printf("\tCelsius\tFahrenheit\n");
    for(cel=LOWER; cel<=UPPER; cel += STEP)
    {
        printf("\t%7d\t%10.1f\n", cel, ((9.0/5.0)*cel)+32);
    }
}
