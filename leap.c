#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int year = atoi(argv[1]);
  bool isleap;
  isleap = (year % 4 == 0);
  isleap = isleap && (year % 100 != 0);
  isleap = isleap || (year % 400 != 0);
  printf("%s\n", isleap ? "Es bisiesto" : "No es bisiesto");
  return 0;
}
