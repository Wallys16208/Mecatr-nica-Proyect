#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* En esta parte el float funciona como una función que guarda la variable PRO*/
    float PRO;
    /* El "printf" se encarga de presentar un mensaje de texto cuando se ejecuta*/
    printf("Ingrese el promedio del alumno: *");
    /* Scanf se encarga de leer el valor tipo float y luego almacena la informacion que da el usuario en la variable PRO*/
    scanf("%f", &PRO);
    /* Esta es una funcion "if" que determina si la variable cumple con la condicion para presentar (printf)*/
    if (PRO >= 6)
        printf("\nAprobado");
}
