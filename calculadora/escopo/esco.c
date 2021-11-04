#include <stdio.h>
int aux(){
  int a = 4;
  printf("Dentro = %d\n", a);
}
int main()
{
  int a = 5;
  printf("Main = %d\n", a);
  aux();
  return 0;
}
