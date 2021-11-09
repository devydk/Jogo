#include <stdio.h>

int main() {
  int v[3];
  scanf("%d %d %d", v, v +1, v+2);
  printf("%d %d %d\n", v[0], v[1], v[2]);
}