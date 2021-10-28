#include <stdio.h>

int main()
{
  int A, B, i, aux;

  scanf("%d %d", &A, &B);

  if (B <  A)
  {
    aux = B;
    B = A;
    A = aux;
  }
  

  for ( i = A; i <= B; i++);
  {
    printf("%d", i);
  }
  

  return 0;
}
