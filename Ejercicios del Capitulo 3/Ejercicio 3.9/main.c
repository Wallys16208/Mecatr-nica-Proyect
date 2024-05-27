#include <stdio.h>
#include <stdlib.h>

/* Serie.
El programa imprime los terminos y obtiene la suma de una determinada serie.

I, SSE y CAM: variable de tipo entero. */

void main(void)
{
int I = 2, CAM = 1;
/*SSE: variable de tipo long inicializada a 0, usada para acumular la suma de los términos de la serie.*/
long SSE = 0;
/*Bucle while que itera mientras I sea menor o igual a 2500:*/
while (I <= 2500)
{
    SSE = SSE + I;
    printf ("\t %d", I);
    /*Si CAM es verdadero (no cero), se incrementa I en 5 y se decrementa CAM.
Si CAM es falso (cero), se incrementa I en 3 y se incrementa CAM.*/
    if (CAM)
{
        I += 5;
        CAM --;

}
else
{
    I += 3;
    CAM ++;
}
}
printf ("\nLa suma de la serie es: %1d", SSE);
}
