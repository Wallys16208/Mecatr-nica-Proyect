#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*En esta variable float se almacenan 2 variables PRE y NPR*/
    float PRE, NPR;
    /*Este comoando imprime un texto al ejecutarse*/
    printf("Ingrese el pecio del producto: ");
    /*Lee un valor de tipo float introducido por el usuario y lo almacena en las variables PRE y NPR*/
    scanf("%f", &PRE);
    /*Este if se ejecuta si la variable PRE es menor a 1500*/
    if (PRE < 1500)
    /*Esta parte iguala las variables NPR y PRE y las multiplica por 1.11*/
        NPR = PRE * 1.11;
    /*Este else se cumple si el "if" es falso e iguala NPR a PRE luego multiplicandolo por 1.08*/
    else
        NPR = PRE * 1.08;
    printf("\nNuevo precio del producto: %8.2f", NPR);
}
