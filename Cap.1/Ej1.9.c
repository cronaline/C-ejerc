//Ejercicio 1.9: Escriba un programa que copie su entrada a la salida, reemplazando cada cadena de uno o más
//espacios en blanco por un solo espacio en blanco
//Para escribir EOF se debe de presionar ctrl+d
#include <stdio.h>
#define SI 1
#define NO 0

int main()
{
    int c, eb;
    eb = NO;
    while((c = getchar()) != EOF)
    {
        if(eb == SI && c != ' ')
        {
            eb = NO;
        }
        if(eb == NO)
        {
            putchar(c);
            if(c == ' ')
            {
                eb = SI;
            }
        }
    }
    return 0;
}
