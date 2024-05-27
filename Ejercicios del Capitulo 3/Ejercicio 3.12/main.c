#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Serie de ULAM.
El programa, al recibir como dato entero positivo, obtiene y describe la serie de ULAM.

NUM: variable de tipo entero. */

void main(void)
{
int NUM;
printf ("Ingresa el numero para calcular la serie: ");
scanf ("%d", &NUM);
/*Este if se ejecuta si la variable NUM > 0*/
if (NUM > 0)
{
    printf ("\nSerie de ULAM\n");
    printf ("%d \t", NUM);
    /*Mientras NUM no sea igual a 1, se ejecuta este bucle*/
    while (NUM != 1)
    {
        /*Verifica si NUM es par*/
        if (pow(-1, NUM) > 0)
        /*Si es par se divide / 2*/
            NUM = NUM / 2;
        else
        /*Si NUM es impar, se multiplica por 3 y se suma 1*/
            NUM = NUM * 3 + 1;
        printf ("%d \t", NUM);
       }
}
else
    printf ("\n NUM debe ser un entero positivo");
}
