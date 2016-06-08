//Programa que imprime una tabla de Fahrenheit-Celsius version 1
#include <stdio.h>
int main()
{
    float fah, cel;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fah = lower;
    while(fah <= upper)
    {
        cel=(5.0/9.0)*(fah-32.0);
        printf("\n\t%3.0f   %6.1f", fah, cel);
        fah += step;
    }
    printf("\n");
}
