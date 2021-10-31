#include <stdio.h>

int soma (int a, int b){
  int S = a+b;
  return S;
}
int main(int argc, char const *argv[])
{
  int x = soma (2,3);
  printf("%d\n", x);
  return 0;
}
