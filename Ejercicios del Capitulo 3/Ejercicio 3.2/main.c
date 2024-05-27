#include <stdio.h>
#include <stdlib.h>

/*Suma positivos.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los enteros positivos.

I, N, NUM, SUM: variables de tipo entero. */

void main(void)
{
int I, N, NUM, SUM;
/*La variable SUM = 0 */
SUM = 0;
/*Le pide al usuario que ingrese datos*/
printf("Ingrese el numero de datos:\t");
scanf ("%d", &N);
/*El bucle se ejecuta desde 1 hasta N, permitiendo que el usuario ingrese N números.*/
for (I=1; I<=N; I++)
{
    printf ("Ingrese el dato número %d:\t", I);
    scanf("%d", &NUM);
    /*Condicional para sumar números que sean iguales a cero*/
    if (NUM = 0)
        SUM = SUM + NUM;
}
printf ("\nLa suma de los numeros positivos es: %d", SUM);
}
