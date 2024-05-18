#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Este float se encarg de almacenar el valor PRO*/
    float PRO;
    /*El printf al ejecutarse muestra un texto pidiendo informacion sobre un dato*/
    printf("Ingrese el promedio del alumno: ");
    /*El escanf analisa los valores de la variable PRO*/
    scanf("%f", &PRO);
    /*El if solo se activara si el dato dado por el usiario es mayor o igual a 6.0*/
    if (PRO >= 6.0)
    /*Este printf se ejecuta si el if es verdadero*/
        printf("\nAprobado");
    /*Este comando else se ejecuta si el valor puesto es menor a 6.0*/
    else
    /*Este printf se ejecuta si el if es falso*/
        printf("\nReprobado");
}
