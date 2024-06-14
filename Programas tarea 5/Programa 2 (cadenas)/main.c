#include <stdio.h>

int main() {
    char cadena[100];
    char *ptr;
    int minusculas = 0, mayusculas = 0, numeros = 0;

    printf("Introduce una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);

    /* Eliminar el carácter de nueva línea si se ingresó*/
    size_t longitud = 0;
    while (cadena[longitud] != '\0') {
        longitud++;
    }
    if (longitud > 0 && cadena[longitud - 1] == '\n') {
        cadena[longitud - 1] = '\0';
    }

    /* Inicializar el puntero al inicio de la cadena */
    ptr = cadena;

    /* Recorrer la cadena utilizando el puntero */
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            minusculas++;
        } else if (*ptr >= 'A' && *ptr <= 'Z') {
            mayusculas++;
        } else if (*ptr >= '0' && *ptr <= '9') {
            numeros++;
        }
        ptr++;
    }

    /* Imprimir los resultados */
    printf("La cadena contiene:\n");
    printf("Letras minúsculas: %d\n", minusculas);
    printf("Letras mayúsculas: %d\n", mayusculas);
    printf("Números: %d\n", numeros);

    return 0;
}
