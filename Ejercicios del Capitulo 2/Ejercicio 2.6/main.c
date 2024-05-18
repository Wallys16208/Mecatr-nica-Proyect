#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*El foat guarda la variable SAL*/
    float SAL;
    /*Se declara la varible NIV*/
    int NIV;
    /*Al ejecutarse le pide al usuario el nivel academico del profesor*/
    printf("Ingrese el nivel academico del profesor: ");
    /*Analiza los datos que estan en la variable NIV*/
    scanf("%d", &NIV);
    /*Al ejecutarse le pide al uario que ingrese un salario*/
    printf("Ingrese el salario: ");
    /*Lee la variable SAL guardada en el Float*/
    scanf("%f", &SAL);
    /*Este comando switch evalua el valor de la variable NIV para saber que operacion realizar*/
    switch(NIV)
    {
    /*Estos Case, son los diferentes tipos de casos a los que puede responder el programa*/
    case 1:
        SAL = SAL * 1.0035;
        break;
    case 2:
        SAL = SAL * 1.0041;
        break;
    case 3:
        SAL = SAL * 1.0048;
        break;
    case 4:
        SAL = SAL * 1.0053;
        break;
    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);
}
