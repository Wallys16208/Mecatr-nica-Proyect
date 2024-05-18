#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Declarar una variable float RES*/
    float RES;
    /*Declarar 3 variables de tipo entero R, T, Q*/
    int R, T, Q;
    /*Pide al usuario ingresae los valores de R, T, Q*/
    printf("Ingrese los valores de R, T y Q: ");
    /*Lee y guarda los valores de las variables R, T, Q*/
    scanf("%d %d %d", &R, &T, &Q);
    /*Calcular el valor de: pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2) y almacenarlo en RES*/
    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);
    /*Si la variable RES es menor que 820 se imprime un orden R, T, Q*/
    if (RES < 820)
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);
}
