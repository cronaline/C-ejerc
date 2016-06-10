//Ejercicio 1.8: Escriba un programa que cuente espacios en blanco, tabuladores y nuevas lineas
//Para escribir EOF, pulsar ctrl+d
#include <stdio.h>

int main()
{
    int eb, tab, nl, c;
    eb = tab = nl = 0;
    while((c = getchar()) != EOF)
    {
        if(c ==  ' ')
        {
            eb++;
        }
        else if(c == '\t')
        {
            tab++;
        }
        else if (c == '\n')
        {
            nl++;
        }
    }
    printf("Numero de espacios en blanco: %d\n", eb);
    printf("Numero de tabulaciones en blanco: %d\n", tab);
    printf("Numero de lineas en blanco: %d\n", nl);
}
