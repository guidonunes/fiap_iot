#include <stdio.h>
int main()
{
    double number, soma = 0;

    do
    {
        printf("Insira um número: ");
        scanf("%lf", &number);
        soma += number;
    }
    while(number != 0.0); //while number is not equal 0

    printf("Soma = %.2lf",soma);

    return 0;
}