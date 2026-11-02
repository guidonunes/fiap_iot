#include <stdio.h>
int main(void)
{
  int n1, n2, sum;
  printf("Welcome to sum numbers! Type the first integer: ");
  scanf("%d", &n1);

  printf("Type the second integer: ");
  scanf("%d", &n2);

  sum = n1 + n2;
  printf("The result is:  %d\n", sum);

  if(sum > 10)
  {
    printf("The sum is greater than 10\n");
  }
  else
  {
    printf("The sum is smaller or equal 10\n");
  }

  return 0;
}