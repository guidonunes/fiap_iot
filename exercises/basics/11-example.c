#include <stdio.h>

int main(void)
{
  int contador; //variável de controle do loop

  for(contador = 10; contador >= 1; contador--)
  {
    printf("%d ", contador);
  }
  printf("\nFim da contagem...\n");

  return 0;
}