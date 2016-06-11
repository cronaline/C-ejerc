/*//Ejercicio 1.10: Escriba un programa que copie su entrada a la salida, reemplazando
//cada tabulacion por \t, cada retroceso por \b y cada diagonal invetida por \\*/
#include <stdio.h>

int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        if(c == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (c == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(c);
        }
    }
}
