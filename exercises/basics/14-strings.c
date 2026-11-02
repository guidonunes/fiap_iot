#include <stdio.h>

#define MAX 100


int main()
{
    char buf[MAX];

    printf("Type a name: ");
    fgets(buf, sizeof(buf), stdin);
    // scanf("%s", buf);
    printf("\n The name you typed is: %s\n", buf);

}