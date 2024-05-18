#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Declara las variables de tipo entero CLA, TIE*/
    int CLA, TIE;
/*Declara la variable real COS*/
    float COS;
/*Le pide al usuario que ingrese la clave y el tiempo*/
    printf("Ingresa la clave y el tiempo: ");
/*Lee y almacena las variables CLA y TIE*/
    scanf("%d %d", &CLA, &TIE);
/*Evalua la variable CLA para saber que ecuacion utilizar*/
    switch(CLA)
    {
/*Caso para CLA igual a 1: calcular COS como TIE * 0.13 / 60*/
        case 1: COS = TIE * 0.13 / 60; break;
/*Caso para CLA igual a 2, Calcular COS como TIE * 0,11 / 60;*/
        case 2: COS = TIE * 0.11 / 60; break;
/*Caso para CLA igual a 5, Calcular COS como TIE * 0,22 / 60;*/
        case 5: COS = TIE * 0.22 / 60; break;
/*Caso para CLA igual a 6, Calcular COS como TIE * 0,19 / 60;*/
        case 6: COS = TIE * 0.19 / 60; break;
/*Caso para CLA igual a 7 0 9, Calcular COS como TIE * 0,17 / 60;*/
        case 7:
        case 9: COS = TIE * 0.17 / 60; break;
/*Caso para CLA igual a 10, Calcular COS como TIE * 0,20 / 60;*/
        case 10: COS = TIE * 0.20 / 60; break;
/*Caso para CLA igual a 15, Calcular COS como TIE * 0,39 / 60;*/
        case 15: COS = TIE * 0.39 / 60; break;
/*Caso para CLA igual a 20, Calcular COS como TIE * 0,28 / 60;*/
        case 20: COS = TIE * 0.28 / 60; break;
/*Si no se cumplen ningunas de las anteriores asignar -1 a COS*/
        default : COS = -1; break;
    }
/*Verificar si COS es diferente de -1*/
    if (COS != -1)
/*Imprimir la clave, el tiempo y el costo si COS es válido*/
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);
    else
/*Si COS es igual a -1 imprimir el mensaje de Error en la clave*/
        printf("\nError en la clave");
    return 0;
}
