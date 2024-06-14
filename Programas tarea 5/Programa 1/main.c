#include <stdio.h>

int main() {
    char cadena[100];
    char *ptr;

    printf("Introduce una cadena de letras: ");
    fgets(cadena, sizeof(cadena), stdin);

    /* Eliminar el carácter de nueva línea si se ingresó */
    if (cadena[strlen(cadena) - 1] == '\n') {
        cadena[strlen(cadena) - 1] = '\0';
    }

    /* Convertir letras minúsculas a mayúsculas y viceversa */
    ptr = cadena;
    while (*ptr != '\0') {
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = *ptr - ('a' - 'A'); /* Convierte a mayúscula */
        } else if (*ptr >= 'A' && *ptr <= 'Z') {
            *ptr = *ptr + ('a' - 'A'); /* Convierte a minúscula */
        }
        ptr++;
    }

    printf("La cadena convertida es: %s\n", cadena);

    return 0;
}
