#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    /*Se declaran las tres variables de tipo float P, S, R*/
    float P, S, R;
    /*Al ejecutarse este comando imprime un mensaje pidiendo al usurio que ingrese las ventas de los vendedores*/
    printf("\nIngrese las ventas de los 3 vendedores: ");
    /*El comando analiza las variables P, S, R*/
    scanf("%f %f %f", &P, &S, &R);
    /*Aqui ha un if con varios if anidados al mismo*/
    if (P > S)
        if (P > R)
            if (S > R)
                /*Si P > R > S entonces este comando imprime el orden P, S, R*/
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R);
            else
                /*Si P > R > S, imprime el orden P, R, S*/
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);
        else
            /*Si R > P > S, imprime el orden R, P, S*/
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S);
    else if (S > R)
        if (P > R)
            /*Si S > P > R imprime el orden S, P, R*/
            printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);
        else
         /* Si S > R > P, imprime el orden S, R, P*/
            printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P);
    else
        /*Si R > S > P, imprime el orden R, S, P*/
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);
}
