#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Este float guarda 2 variables reales tipo PRE, NPR*/
    float PRE, NPR;
    /*Este comando Printf muestra un texto especifico al ejecutarse*/
    printf("Ingrese el precio del producto: ");
    /*En este caso el comando scanf identifica la variable PRE y la guarda en el float*/
    scanf("%f", &PRE);
    /*Este comando if solo se activa cuando la variable PRE es mayor a 1500, si es asi, multiplica dicho valor por 1.11 y muestra un printf*/
    if (PRE > 1500)
    {
        NPR = PRE * 1.11;
        printf("\nNuevo precio: %7.2f",NPR);
    }
}
