#include <stdio.h>
int main()
{
int x = 3;
int *ptr;
ptr = &x;
printf(" x=%d ptr=%p conteudo do que ptr aponta %d \n",x, (void *) ptr, *ptr);
//conteúdo do que ptr aponta recebe o valor 7
*ptr = 7;
printf(" x=%d ptr=%p conteudo do que ptr aponta %d \n",x, (void *) ptr, *ptr);

return 0;
}