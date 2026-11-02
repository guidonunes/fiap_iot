#include <stdio.h>


#define N 5
int main()
{
    int age[N], i, count=0;
    for(i=0; i < N; i++)
    {
        printf("Type an age number: ");
        scanf("%d", &age[i]);
        if (age[i] >= 18) {
            count++;
        }
    }

    printf("The number of people with age above 18 is: %d\n", count);
}
