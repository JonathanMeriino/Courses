//considere el siguiente codigo de programa
#include <stdio.h>

int main()
{
    int i=1,n;
    while(i<=n)
    {
        if((i%n)==0){
            ++i;
        }
    }
    printf("%d \n",i);
}