#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Pares e impares.
El programa, al recibir como datos N numeros enteros, obtiene la suma de los numeros pares y calcula el promedio de los impares.

I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */
void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;  /* Declaración de variables*/

    printf("Ingrese el numero de datos que se van a procesar:\t");
    scanf("%d", &N);

    if (N > 0)
    {
        for (I = 1; I <= N; I++)
        {
            /*Solicitar al usuario que ingrese el número I*/
            printf("\nIngrese el numero %d: ", I);
            scanf("%d", &NUM);

            /*Verificar si el número es par o impar*/
            if (NUM % 2 == 0)
            {
                /*Si NUM es par, sumarlo a SPA (suma de pares)*/
                SPA = SPA + NUM;
            }
            else
            {
               /* Si NUM es impar, sumarlo a SIM (suma de impares) y aumentar el contador CIM*/
                SIM = SIM + NUM;
                CIM++;
            }
        }

        /* Imprimir la suma de los números pares*/
        printf("\nLa suma de los numeros pares es: %d", SPA);

        /* Verificar si se ingresaron números impares (CIM > 0) antes de calcular el promedio*/
        if (CIM > 0)
        {
            printf("\nEl promedio de numeros impares es: %5.2f", (float)SIM / CIM);
        }
        else
        {
            printf("\nNo se ingresaron numeros impares.");
        }
    }
    else
    {
        printf("\nEl valor de N es incorrecto");
    }
}

