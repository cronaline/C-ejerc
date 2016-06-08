//Programa que imprime una tabla de Fahrenheit-Celsius version 2
#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fah;
    printf("\tFahrenheit\tCelsius    \n");
    for(fah=LOWER; fah<=UPPER; fah += STEP)
    {
        printf("\t%10d\t%7.1f\n", fah, (5.0/9.0)*(fah-32.0));
    }
}
