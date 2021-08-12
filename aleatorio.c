#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
  int n = atoi(argv[1]);
  srand(time(NULL));
  printf("%d\n", rand() % n);
  return 0;
}
