#include <stdio.h>
int main()
{
  float N1, N2, media;
  scanf ("%f%f", &N1, &N2);
  media = (N1 * 2 + N2 *3) /5;
  if(media >= 7.0){
    printf("Aprovado \n");
  }else if(media < 4.5){
    printf("Reprovado \n");
  }else{
    printf("Final \n");
  }
  return 0;
}
