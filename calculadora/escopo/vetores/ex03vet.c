#include <stdio.h>
int main(int argc, char const *argv[])
{
  int v[10];
  int i;

  for(i =0; i <= 9; i++){
    scanf("%d", &v[i]);
  }

  for(i = 9; i >= 0; i--){
    printf("%d\n", v[i]);
  }
  return 0;
}
