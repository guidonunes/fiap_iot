#include <stdio.h>

int main()
{
    int x;
    char letra;

    printf("Type a character (e.g: A-Z): ");
    fflush(stdin); //clean keyboard buffer;

    letra = getchar();
    printf("Type an integer: ");
    scanf("%d", &x);
    fflush(stdin);
    printf("%c\n", letra);
    printf("%d\n", x);
}