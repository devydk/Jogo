#include <stdio.h>

int main(int argc, char const *argv[])
{
  int id;
  scanf("%d", &id);
  switch(id){
    case 1:
    printf("papel \n");
    break;
  
    case 2:
    printf("tesoura \n");
    break;
    case 3:
    printf("cola \n");
    break;
    case 4:
    printf("caneta \n");
    break;
    default:
    printf("id nao encontrado \n");
  }
  return 0;
}
