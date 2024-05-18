#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
/*Se declaran 3 variables de tipo entero T, P, N*/
    int T, P, N;
/*Se le pide al usuario que ingrese 3 valores numericos*/
    printf("Ingrese los valores de T, P y N: ");
/*Lee y guarda los valores de las variables T, P, N*/
    scanf("%d %d %d", &T, &P, &N);
/* Se verifica si P es diferente de cero*/
    if (P != 0)
    {
/* Se compara si pow(T / P, N) es igual a pow(T, N) / pow(P, N) */
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))
/* Si se cumple la igualdad, se imprime el mensaje correspondiente */
                printf("\nSe comprueba la igualdad");
                else
/* Si no se cumple la igualadad se pone el mensaje correspondiente */
                    printf("\No se comprueba la igualdad");
        }
/*Si se pone como valor "0" se muestra el siguiente mensaje*/
        else
            printf("\nP tiene que ser diferente de cero");
return 0;
}
