//orden de evaluacion no predecible en expresiones
#include <stdio.h>
void main()
{
    int n=5,t;
    t=++n*--n;
    printf("n = %d, t =%d\n",n,t );
    printf("%d %d %d\n",++n,++n,++n);
}
