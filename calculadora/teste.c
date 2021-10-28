#include <stdio.h>
#define false 0
#define true 1
int main()
{
  int terminar=false;
  int i=0;

  while (!terminar){
    printf("Continuando ...%d\n",i );
    if (i>10 ) terminar = true;
    i++;
  }
  return 0;
}
