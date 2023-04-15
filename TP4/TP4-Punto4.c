/*
4. Escriba, compile y ejecute un programa en C que invoque a la system call para crear un proceso,
presentando en pantalla el ID de cada proceso.

a. Modifique el código anterior para realice un ciclo repetitivo en el que se presente por pantalla el ID del
 proceso N veces, con N igual a 10, 20, 200, 500 y 1000.

b. Ejecute el código varias veces (al menos cuatro veces) con cada valor de N. ¿Qué observa respecto del
orden en que se imprimen los mensajes en pantalla? Explique porqué sucede esto.

 El número de veces que se ejecutará es igual al número de procesos creados. El total de procesos creados es 2^n
 por cada ejecución.

 Un proceso hijo es creado con fork(), el hijo retorna 0 y se obtiene el ID del proceso hijo en el lado
 del padre. Como ambos procesos están corriendo de manera concurrente no podemos afirmar que procesos
 se ejecutará primero.

c. Con éste código ¿puede distinguir cuál es el proceso padre y cuál el hijo? Explique.

 Se puede saber distinguir entre las jerarquías con el resultado de la system call fork().
 Si es igual a cero es el proceso hijo, si es otro número (ID) es el proceo padre

 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_ITERACIONES 5

int main() {

    int resultado;


    while (CANTIDAD_ITERACIONES > 0) {
        resultado = fork();
        printf("ID proceso es %i\n", getpid());
    }

    return 0;
}