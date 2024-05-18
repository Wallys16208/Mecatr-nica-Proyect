#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Se declaran 4 variables de tipo entero*/
    int CLA, CAT, ANT, RES;
/*Le pide al usuario que ingrese la clave, categoria y antiguedad de un trabajador*/
    printf("\nIngrese la clave, Categoria y antiguedad del trabajador: ");
/*Lee y almacena las variables CLA, CAT y ANT*/
    scanf("%d %d %d", &CLA, &CAT, &ANT);
/*Evalua la varible CAT para determinar que ecuacion utilizar*/
    switch(CAT)
    {
/*En el caso 3 y 4 si ANT es mayor o igual a 5 entonces RES = 0*/
    case 3:
    case 4:
        if (ANT >= 5)
            RES = 1;
/*Si RES es menor a 5 entonces RES = 0*/
        else
            RES = 0;
        break;
/*Si ANT es mayor o igual a 7 entonces RES es igual a 1*/
    case 2:
        if (ANT >= 7)
            RES = 1;
/*Si RES es menor a 7 entonces RES = 0*/
        else
            RES = 0;
/*Salir del switch*/
        break;
/*Se ejecuta si ningúno de los casos anteriores coincide*/
    default:
        RES = 0;
        break;
    }
/*Si el valor de RES es correcto y es mayor a 0 entonces se imprime el mensaje*/
    if (RES)
        printf("“\nEl trabajador con clave %d reúne las condiciones para el puesto”, CLA");
/*Si el valor de RES es 0 o menor de 0 entonces se imprime este mensaje*/
    else
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLA);
return 0;
}
