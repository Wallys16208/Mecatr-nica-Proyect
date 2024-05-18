#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Declara 2 variable de tipo entero DIS, TIE*/
    int DIS, TIE;
/*Declara una variable de tipo float BIL*/
    float BIL;
/*Le pide al usuario que ingrese Ingrese la distancia entre ciudades y el tiempo de estancia*/
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: ");
/*Lee y almacena los valores de las vriables DIS y TIE*/
    scanf("%d %d", &DIS, &TIE);
/*Si la distancia multiplicada por 2 es mayor a 500 y el tiempo es mayor a 10 entonces BILL es igual a DIS * 2 * 0.19 * 0.8*/
    if ((DIS*2 > 500) && (TIE > 10))
        BIL = DIS * 2 * 0.19 * 0.8;
/*Si Bill es igual a DIS * 2 * 0.19 entonces se imprime el coste del billete*/
    else
        BIL = DIS * 2 * 0.19;
    printf("\n\nCosto del billete: %7.2f", BIL);
/*Se devuelve la funcion main*/
    return 0;
}
