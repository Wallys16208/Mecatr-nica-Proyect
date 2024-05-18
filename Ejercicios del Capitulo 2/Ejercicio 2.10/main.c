#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/*Declara una variable entera NUM*/
    int NUM;
/*Pide al usuario ingresar un numero*/
    printf("Ingrese el numero: ");
/*Analiza y almacena la variable NUM*/
    scanf("%d", &NUM);
/*Si NUM es igual a 0 se imprime la palabra nulo*/
    if (NUM == 0)
        printf("\nNulo");
/*Si el valor de "pow (-1, NUM)" es mayor que cero entonces e Par*/
    else if (pow (-1, NUM)> 0)
        printf("\nPar");
/*Si las condiciones anteriores no se cumplen entonces NUM es Impar*/
    else
        printf("\nImpar");
}
