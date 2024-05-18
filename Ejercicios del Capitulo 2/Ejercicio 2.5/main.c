#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Declarar las variables enteras OP y T*/
    int OP, T;
    /*aqui se declara el valor de la variable RES*/
    float RES;
    /*Este printf le pide al usuario que ingrese una informacion especifica*/
    printf("Ingresa la opcion del calculo y el valor entero: ");
    /*scan analiza los valores alamacenados en las variables OP y T*/
    scanf("%d %d", &OP, &T);
    /*el switch en este caso evalua el valor OP para saber que operacion realizar*/
    switch(OP)
    {
    /*En caso de que OP valga 1 RES = T / 5;*/
    case 1:
        RES = T / 5;
        /*salir del switch*/
        break;
    /*En caso de que OP valga 2, Res = a la funcion pow*/
    case 2:
        RES = pow(T,T); /*La funcion pow esta definida en la biblioteca math.h*/
        /*Salir del switch*/
        break;
    /*Si OP es 3 no pasa nada*/
    case 3:
    /*Si OP es 4 RES es = a 6 * T/2*/
    case 4:
        RES = 6 * T/2;
        /*Salir del switch*/
        break;
    /*Si el valor no coincide con nunguno de los anteriores entonces RES = 1*/
    default:
        RES = 1;
        break;
    }
    /*Imprime un resultado con 7 caracteres de ancho y dos decimales*/
    printf("\nResultado: %7.2f", RES);
    /* Finalizar la funcion main y retornar*/
    return 0;
}
