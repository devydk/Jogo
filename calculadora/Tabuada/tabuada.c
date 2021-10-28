#include <stdio.h>

int main(int argc, char const *argv[])
{
  int x, i;
  scanf("%d", &x);

  i = 1;
  while( i<=10 ){
    printf("%d*%d = %d\n", x, i,  x*i);
    i++;
  }

  
  return 0;
}
