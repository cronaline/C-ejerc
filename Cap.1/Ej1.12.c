//Ejercicio 1.12: Escriba un programa que imprima su entrada una palabra por linea
#include <stdio.h>

int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
        else
        putchar(c);
    }
}
