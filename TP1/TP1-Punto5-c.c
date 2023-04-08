#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main() {
  printf("%s\n", getcwd("/archivo.txt", 200));

  getchar();

  printf("%d\n", chdir("archivo.txt"));

  getchar();

  printf("%ld\n", time(NULL));

  getchar();

  return EXIT_SUCCESS;
}
