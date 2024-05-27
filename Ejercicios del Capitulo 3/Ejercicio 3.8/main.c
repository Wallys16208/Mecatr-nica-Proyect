#include <stdio.h>
#include <stdlib.h>

/* Factorial.
El programa calcula el factorial de un numero entero.

FAC, I, NUM: variables de tipo entero. */

void main(void)
{
int I, NUM;
/*Declaraci�n de la variable FAC de tipo long:*/
long FAC;
printf ("\nIngrese el numero: ");
scanf ("%d", &NUM);
/*Condici�n para verificar si el n�mero es no negativo:*/
if (NUM >= 0)
{
    /*El bucle se ejecuta mientras I sea menor o igual a NUM y Multiplica FAC por I en cada iteraci�n, actualizando el valor de FAC para calcular el factorial.*/
    FAC = 1;
    for (I=1; I <= NUM; I++)
    FAC *= I;
    printf ("\El factorial de %d es: %1d", NUM, FAC);
}
else
    printf ("\nError en el dato ingresado");
}
