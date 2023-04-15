/*
4. Escriba, compile y ejecute un programa en C que invoque a la system call para crear un proceso,
presentando en pantalla el ID de cada proceso.

a. Modifique el código anterior para realice un ciclo repetitivo en el que se presente por pantalla el ID del
 proceso N veces, con N igual a 10, 20, 200, 500 y 1000.

b. Ejecute el código varias veces (al menos cuatro veces) con cada valor de N. ¿Qué observa respecto del
orden en que se imprimen los mensajes en pantalla? Explique porqué sucede esto.

c. Con éste código ¿puede distinguir cuál es el proceso padre y cuál el hijo? Explique.

 Se puede saber distinguir entre las jerarquías con el resultado de la system call fork().
 Si es igual a cero es el proceso padre, si es otro número (ID) es el proceo hijo

 */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(){

    int cantidad_iteraciones = 5;
    int resultado;


    while(cantidad_iteraciones > 0){

        resultado = fork();

        if(resultado == 0){
            printf("ID proceso padre es %i\n", getpid());
        }
        else{
            printf("ID proceso hijo es %i\n", getpid());
        }
    }

    return 0;
}