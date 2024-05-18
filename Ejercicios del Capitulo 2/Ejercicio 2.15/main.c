#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Declara 3 variables de tipo entero TRA, EDA, DIA*/
    int TRA, EDA, DIA;
/*Declara una variable de tipo float COS*/
    float COS;
/*Le pide al usuario que ingrese el tipo de tratamiento, edad y dias*/
    printf("Ingrese tipo de tratamiento edad y dias: ");
/*Analiza y guarda los datos ingresados en las variables TRA, EDA, DIA*/
    scanf("%d %d %d", &TRA, &EDA, &DIA);
/*Evalua la variable TRA para saber que ecuacion utilizar*/
    switch(TRA)
    {
/*En el caso 1 COS = DIA * 2800*/
        case 1: COS = DIA * 2800; break;
/*En el caso 2 COS = DIA * 1980*/
        case 2: COS = DIA * 1950; break;
/*En el caso 3 COS = DIA * 2500*/
        case 3: COS = DIA * 2500; break;
/*En el caso 4 COS = DIA * 1150*/
        case 4: COS = DIA * 1150; break;
/*Si ninguna de las reglas anteriores son verdaderas entonces COS = -1*/
        default: COS = -1; break;
    }
/*confirma que COS no puede valir -1*/
    if (COS != -1)
    {
/*Si la variable EDA es mayor o igul a 60 entonces COS = COS * 0.75*/
        if (EDA >= 60)
            COS = COS * 0.75;
        else
/* Si la variable EDA es menor o igual a 25 entonces COS = COS * 0.85*/
            if (EDA <= 25)
            COS = COS * 0.85;
/*si el If es verdadero imprime la clave, tratamiento, Dias y el costo total*/
        printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f", TRA, DIA, COS);
    }
    else
/*Si las variables no cumplen ninguna de las condiciones anteriores imprime un mensaje de error*/
        printf("\nLa calve del tratamiento es incorrecta");
    return 0;
}
