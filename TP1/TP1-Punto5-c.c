#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  printf("%c\n",
         getcwd("/home/llanillo/sistemas_materia/archivo-texto.txt", 200));

  getchar();

  printf("%d\n", chdir("/home/llanillo/sistemas_materia/archivo-texto.txt"));

  getchar();

  printf("%d\n", time(NULL));

  getchar();

  return EXIT_SUCCESS;
}
