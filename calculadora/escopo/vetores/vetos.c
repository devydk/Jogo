#include <stdio.h>

int main() {
  int v[3];
  *v = 1;
  *(v + 1) = 2;
  *(v + 2) = 3;
  printf("%d %d %d\n", v[0], v[1], v[2]);
}