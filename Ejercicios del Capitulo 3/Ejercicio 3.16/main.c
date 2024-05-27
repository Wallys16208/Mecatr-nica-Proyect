#include <stdio.h>
#include <stdlib.h>

/* El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones
de cada uno de ellos y, ademas, los alumnos con el mejor y peor promedio.

I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/

int main()
{
  int I, MAT, MAMAT, MEMAT;
float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;
printf ("Ingrese la matricula del primer alumno:\t");
scanf ("%d", &MAT);
/*Mientras MAT no sea 0, se ejecuta este bucle*/
while (MAT)
{
    SUM = 0;
    /*Este bucle se ejecuta 5 veces para ingresar 5 calificaciones*/
    for (I = 1; I <= 5; I++)
    {
        printf ("\tIngrese la calificacion del alumno: ", I);
        scanf ("%f", &CAL);
        SUM += CAL;
    }
    /*Calcula el promedio dividiendo SUM por 5*/
      PRO = SUM / 5;
      printf ("\nMatricula:%d\tPromedio:%5.2f", MAT, PRO);
      /*Verifica si el promedio actual es mayor que el promedio máximo registrado*/
      if (PRO > MAPRO)
      {
          MAPRO = PRO;
          MAMAT = MAT;
      }
      /*Verifica si el promedio actual es menor que el promedio mínimo registrado*/
      if (PRO < MEPRO)
      {
          MEPRO = PRO;
          MEMAT = MAT;
      }
      printf ("\n\nIngrese la matricula del siguiente alumno: ");
      scanf ("%d", &MAT);
  }
     printf ("\n\nAlumno con mejor Promedio:\t%d\t\%5.2f", MAMAT, MAPRO);
     printf ("\n\nAlumno con peor  Promedio:\t%d\t\%5.2f", MEMAT, MEPRO);
}
