#include <stdio.h>

int main() {
  int v[3], i;
  for ( i = 0; i < 3; i++)
  {
    scanf("%d", &v[i]);
  }
  
  printf("%d %d %d\n", v[0], v[1], v[2]);
}