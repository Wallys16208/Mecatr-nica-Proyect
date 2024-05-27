#include <stdio.h>
#include <stdlib.h>

int main()
{
    int I = 1, B = 0, C;
    double RES;
    RES = 4.0 / I;
    C = 1;
    /*Bucle while que contin�a hasta que la diferencia entre RES y pi (3.1415) sea menor o igual a 0.0005*/
    while ((fabs (3.1415 - RES)) > 0.0005)
    {
        /*Incrementa I en 2 para obtener el siguiente denominador impar*/
        I += 2;
        /*Alterna la suma y la resta de los t�rminos de la serie*/
        if (B)
        {
            RES += (double) (4.0 / I); /*Suma el t�rmino a RES*/
            B = 0;
        }
        else
        {
            RES -= (double) (4.0 / I);
            B = 1;
        }
        C++; /*Incrementa el contador de t�rminos*/
        }
        printf("\nNumero de terminos:%d", C);
    return 0;
}
