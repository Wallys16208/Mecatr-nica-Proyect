#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Declaracion de las variable sde tipo entero I, J, NUM, SUM, C*/
int I, J, NUM, SUM, C = 0;
printf("\nIngrese el numero limite: ");
scanf("%d", &NUM);
 /* Este bucle se ejecuta desde 1 hasta NUM, incluyendo ambos */
for (I = 1; I <= NUM; I++)
{
    SUM = 0;
    /*Este bucle anidado encuentra los divisores de I que son menores o iguales a la mitad de I*/
    for (J = 1; J <= (I / 2); J++)
        /*Si J es un divisor de I*/
        if ((I % J) == 0)
        SUM += J; /*Suma J a SUM*/
    if (SUM == I)
    {
        printf("\n%d es un numero perfecto", I);
        C++;
    }
    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C);
    }
}

