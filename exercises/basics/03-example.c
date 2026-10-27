#include <stdio.h>

int main()
{
    float x,y,z,w;
    int m, n=1;
    x=3.2;
    y=x*2;
    z=(x+y)/2;
    w=x+y/2;
    m=n/2;
    x=n/2.0;
    printf("x=%0.1f \t y=%0.1f \n",x,y);
    printf("z=%0.1f \t w=%0.1f \n",z,w);
    printf("m=%d \t n=%d \n",m,n);
    return 0;
}