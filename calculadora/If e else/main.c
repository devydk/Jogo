#include <stdint.h>

int main(int argc, char const *argv[])
{
  float media;
  scanf ("%f", &media);
  if(media >= 7.0 ) {
    printf("Aprovado \n");
  }else if (media < 4.0) {
    printf("Reprovado \n");
  }else {
    printf("Avalicao Final \n");
  }
  return 0;
}
