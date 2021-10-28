#include <stdio.h>

int main()
{
  int N, i;
  int fatorial=1;

  scanf("%d", &N);
  for(i =1; i <= N; i++){
    fatorial = fatorial*i;
    printf("%d %d\n", i, fatorial);
  }
  return 0;
}
