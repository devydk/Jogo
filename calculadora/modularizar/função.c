#include <stdio.h>

int soma (int a, int b){
  int S = a+b;
  return S;
  /*printf("Nao vai aparecer\n")*/
}
int menor (int a, int b){
if (a<=b)
{
  return a;
}else{
  return b;
}

}
float media (float a, float b) {
  return (a+b) / 2.0;
}
int main(){
  float x, y;
  scanf("%f %f", &x, &y);
  printf("%f\n", media (x, y));
  return 0;
}
