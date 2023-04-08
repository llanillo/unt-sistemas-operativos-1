#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *archivo;
    char caracter;

    archivo = fopen("texto.txt", "r");

    if (archivo == NULL) {
        printf("Archivo no existente");
        return EXIT_FAILURE;
    } else {
        printf("\nEl contenido del archivo es \n");
        while ((caracter = fgetc(archivo)) != EOF) {
            printf("%c", caracter);
        }
    }

    return EXIT_SUCCESS;
}
