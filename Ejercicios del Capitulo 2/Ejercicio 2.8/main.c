#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Declarar las variables enteras MAT, CAR, SEM*/
    int MAT, CAR, SEM;
    /*Declarar la variable Float PRO*/
    float PRO;
    /*Solicita al usuario que ingrese la matricula*/
    printf("Ingrese la matriula: ");
    /*Analiza y almacena los valores ingresados en MAT*/
    scanf("%d", &MAT);
    /*Solicita a usuario poner su tipo de carrera*/
    printf("Ingrese carrera (1-Industrial 2-Telematica 3-Computcion 4-Mecanica) : ");
    /*Analiza y almacena los valores ingresados en CAR*/
    scanf("%d", &CAR);
    /*Solicita a usuario ingresar su semestre*/
    printf("Ingrese el semestre: ");
    /*Analiza y almacena los valores ingresados en SEM*/
    scanf("%d", &SEM);
    /*Solicita a usuario ingresar su promedio*/
    printf("Ingrese Promedio: ");
    /*Analiza y almacena los valores ingresados en PRO*/
    scanf("%f", &PRO);
    /*Lee el valor de la variable CAR para determinar la carrera*/
    switch(CAR)
    {
    /*Si la carrera es industrial CAR es igual a uno*/
    case 1:
    /*Si el semestre es igual o mayor a 6 el promedio es igual o mayor a 8.5*/
        if (SEM >= 6 && PRO >= 8.5)
    /*Imprime la matricula la carrera y el promedio*/
            printf("\n%d %d %5.2f", MAT, CAR, PRO);
    /*Sale del switch*/
        break;
    /*Si la carrera es industrial CAR es igual a uno*/
    case 2:
    /*Si el semestre es mayor o igual a 5 el promedio sera maypr o igual a 9.0*/
        if (SEM >= 5 && PRO >= 9.0)
    /*Imprime la matricula la carrera y el promedio*/
            printf("\n%d %d %5.2f", MAT, CAR, PRO);
    /*Sale del switch*/
        break;
    case 3:
    /*Si el semestre es mayor o igual a 6 el promedio sera mayor o igual a 8.8*/
        if (SEM >= 6 && PRO >= 8.8)
    /*Imprime la matricula la carrera y el promedio*/
            printf("\n%d %d %5.2f", MAT, CAR, PRO);
    /*Sale del switch*/
        break;
    case 4:
    /*Si el semestre es mayor o igual a 7 el promedio sera mayor o igual a 9.0*/
        if (SEM >= 7 && PRO >= 9.0)
    /*Imprime la matricula la carrera y el promedio*/
            printf("\n%d %d %5.2f", MAT, CAR, PRO);
    /*Sale del switch*/
        break;
    /*Si la variable CAR no coincide con los casos anteriorres entoces se ejecuta el default*/
    default:
    /*Avisa de que no se selecciono debidamente la carrera*/
        printf("\n Error en la carrera");
    /*Sale del switch*/
        break;
    }
}
