/*
5. Escriba, compile y ejecute un programa en C que pueda distinguir cuál es el proceso padre (quien invoca
a la system call de creación de procesos) y el proceso hijo (el proceso creado por el que invocó a la system
call).
a. En el código muestre por pantalla el ID de cada proceso una sola vez. ¿En qué orden se muestran los
mensajes? ¿Por qué?

 Ambos procesos están corriendo de manera concurrente no podemos afirmar que procesos serán
 elegidos por el sistema operativo para ejecutar primero.

b. Modifique el código como en el ejercicio anterior para mostrar el ID del proceso Nveces, con los mismos
valores. ¿Qué observa?

Cada vez que se crea un proceso, el hijo se crea a imagen y semejanza del proceso padre por lo que también hará una llamada
a la system call fork() y creará sus procesos hijos donde obtendremos una serie de llamads recursivas.

c. Investigue “quién decide” el orden en que se muestran los mensajes por pantalla.
El sistema operativo.

*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define CANTIDAD_ITERACIONES 5

int main(){

    int resultado;


    while(CANTIDAD_ITERACIONES > 0){

        resultado = fork();

        if(resultado == 0){
            printf("ID proceso hijo es %i\n", getpid());
        }
        else{
            printf("ID proceso padre es %i\n", getpid());
        }
    }

    return 0;
}
