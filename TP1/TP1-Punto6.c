#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *archivo;
    char linea1[100];
    char linea2[100];
    
    // Abrir el archivo en modo de lectura
    archivo = fopen("archivo.txt", "r");
    
    // Leer la primera línea y almacenarla en la variable "linea1"
    fgets(linea1, 100, archivo);
    
    // Leer la segunda línea y almacenarla en la variable "linea2"
    fgets(linea2, 100, archivo);
    
    // Cerrar el archivo
    fclose(archivo);

    printf("Abriendo archivo\n");

    getchar();

    // Mostrar las líneas leídas en la consola
    printf("Línea 1: %s\n", linea1);

    getchar();

    printf("Línea 2: %s\n", linea2);

    getchar();

    exit(1);
}
