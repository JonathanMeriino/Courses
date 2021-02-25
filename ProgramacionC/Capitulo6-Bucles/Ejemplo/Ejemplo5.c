#include<stdio.h>
#include <math.h>
#define M 15
#define f(x) exp(2*x) - x

int main()
{
    int i;
    double x;
    for(i=1; i<=M; i++)
    {
        printf("Valor de x: ");
        scanf("%lf",&x);
        printf("f(%.1lf) = %.4g \n",x,f(x));
    }
    return 0;
}