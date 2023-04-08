#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
  printf("%s\n", getcwd("/home/llanillo/sistemas_materia/archivo-texto.txt", 200));

  getchar();

  printf("%d\n", chdir("/home/llanillo/sistemas_materia/archivo-texto.txt"));

  getchar();

  printf("%ld\n", time(NULL));

  getchar();

  return EXIT_SUCCESS;
}
