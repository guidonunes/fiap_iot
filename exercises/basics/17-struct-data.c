#include <stdio.h>
#include <string.h>

struct rotulo{
  int x;
  float y;
  char n[20];
  };

int main()
{
  struct rotulo qlq = {1,2.3,"Primeiro teste"};
  //declara uma variável struct e atribui valores iniciais
  printf(" x= %d \t y= %0.2f \t n= %s \n", qlq.x ,qlq.y ,qlq.n);
  qlq.x=0;
  qlq.y = 87.265;
  strcpy(qlq.n,"Segundo Teste");
  printf(" x= %d \t y= %0.2f \t n= %s \n", qlq.x ,qlq.y ,qlq.n);

  return 0;
}