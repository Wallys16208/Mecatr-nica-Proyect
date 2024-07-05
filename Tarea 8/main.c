#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Alumno {
    char nombre[50];
    int edad;
    float promedio;
};

void grabarDato(struct Alumno** alumnos, int* numAlumnos) {
    /* Lógica para grabar un nuevo alumno en memoria dinámica */
    /* y actualizar el contador de alumnos */
    struct Alumno nuevoAlumno;

    printf("Ingrese el nombre del alumno: ");
    scanf("%s", nuevoAlumno.nombre);
    printf("Ingrese la edad del alumno: ");
    scanf("%d", &nuevoAlumno.edad);
    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &nuevoAlumno.promedio);

    (*numAlumnos)++;
    *alumnos = realloc(*alumnos, sizeof(struct Alumno) * (*numAlumnos));
    (*alumnos)[*numAlumnos - 1] = nuevoAlumno;
}

void leerDesdeDisco(struct Alumno* alumnos, int numAlumnos) {
    FILE* archivo = fopen("alumnos.dat", "rb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }
    printf("\nDatos de los alumnos:\n");

    int i;
    for (i = 0; i < numAlumnos; i++) {
        printf("Alumno %d:\n", i + 1);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Promedio: %.2f\n", alumnos[i].promedio);
        printf("\n");
    }

    fclose(archivo);
}

int main() {
    struct Alumno* alumnos = NULL;
    int numAlumnos = 0;

    int opcion;
    do {
        printf("\nMenú de opciones:\n");
        printf("1. Salir\n");
        printf("2. Leer desde disco\n");
        printf("3. Grabar dato\n");
        printf("Ingrese la opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                /* Liberar memoria dinámica antes de salir */
                free(alumnos);
                break;
            case 2:
                leerDesdeDisco(alumnos, numAlumnos);
                break;
            case 3:
                grabarDato(&alumnos, &numAlumnos);
                break;
            default:
                printf("Opción inválida. Intente nuevamente.\n");
        }
    } while (opcion != 1);

    /* Guardar los datos en el archivo antes de salir */
    FILE* archivo = fopen("alumnos.dat", "wb");
    if (archivo != NULL) {
        fwrite(alumnos, sizeof(struct Alumno), numAlumnos, archivo);
        fclose(archivo);
    }

    return 0;
}
