#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/*Declara una variable real X*/
    float X;
/*Declara una variable tipo entera Y*/
    int Y;
/*Le pide al usuario que ingrese un valor para Y*/
    printf("Ingrese el valor de Y: ");
/*Lee y almacena los datos ingresados en la variable Y*/
    scanf("%d", &Y);
/*Evaluar si Y es menor que 0 o mayor que 50*/
    if (Y < 0 || Y > 50)
/*Si Y es menor que 0 o mayor que 50, asignar 0 a X*/
        X = 0;
    else
/*Evaluar si Y es menor o igual a 10*/
        if (Y <= 10)
/*Si Y es menor o igual a 0 entonces x es igual a 4 / Y - Y;*/
        X = 4 / Y - Y;
    else
/*Evaluar si Y es menor o igual a 25*/
        if (Y <= 25)
/*Si Y es menor o igual a 25, calcular X como Y^3 - 12*/
        X = pow(Y, 3) - 12;
    else
/*Si Y es mayor que 25, calcular X como Y^2 + Y^3 - 18*/
        X = pow(Y, 2) + pow(Y, 3) - 18;
/*Imprimir los valores de Y y X en un formato específico*/
    printf("\n\nY = %d\tX = %8.2f", Y, X);
    return 0;
}
