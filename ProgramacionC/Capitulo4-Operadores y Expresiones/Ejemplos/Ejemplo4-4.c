//Diferencias entre operadores de preincremento y posincremento
#include<stdio.h>
//test de operadores ++ y -- * /
void main()
{
  int m=99, n;
  n = ++m;
  printf("m =%d,n=%d\n",m,n);
  n = m++;
  printf("m = %d, n = %d\n",m,n);
  printf("m = %d\n",m++);
  printf("m= %d\n",++m);
}
