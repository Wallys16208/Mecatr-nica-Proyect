#include <stdio.h>
#include <stdlib.h>

/* Fibonacci.
E programa calcula y escribe los primeros 50 numeros de Fibonacci.

I, PRI, SEG, SIG: variables de tipo entero. */

void main(void)
{
int I, PRI = 0, SEG = 1, SIG;
printf ("\t %d \t %d", PRI, SEG);
/*I = 1, si I es menor o igual a 50 entonces I incrementa en 1*/

for (I = 3; I <= 50; I++)
{
    /*La variable SIG + a la suma de las varibles PRI y SEG*/
    SIG = PRI + SEG;
    PRI = SEG;
    SEG = SIG;
    printf ("\t %d", SIG);
}
}
