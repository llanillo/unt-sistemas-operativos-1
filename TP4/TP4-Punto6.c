/*
Ejercicio 6

b. Escriba, compile y ejecute un programa en C que permita crear algunos hilos.
Utilice un ciclo repetitivo para crearlos, y muestre en pantalla un mensaje que identifique cada hilo.

c. Utilizando los comandos ps y strace ejecute el programa para identificar
qué system call se invoca para crear los hilos. ¿Cuál es?
*/

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define CANTIDAD_HILOS 2

void* TareaDelHilo(void* arg);

int main(){

    int resultado;
    pthread_t hilos [CANTIDAD_HILOS];

    for(int i = 0; i < CANTIDAD_HILOS; i++){
        resultado = pthread_create(hilos, NULL, TareaDelHilo, (void*)hilos[i]);

        if(resultado != 0){
            printf("Error al crear hilo %d\n", i);
            exit(EXIT_FAILURE);
        }
    }

    for(int i = 0; i < CANTIDAD_HILOS; i++){
        pthread_join(hilos[i], NULL);
    }

    return 0;
}

void* TareaDelHilo(void* arg){
    int idHilo = *(int*) arg;
    printf("ID hilo en ejecución %i\n", idHilo);
    pthread_exit(NULL);
}