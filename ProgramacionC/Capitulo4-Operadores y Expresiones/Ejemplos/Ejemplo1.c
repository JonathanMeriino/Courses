#include <stdio.h>

int main()
{
  int n,m;

  n=8;
  m = ++n;            //Incrementa n en 1, 9, y lo asigna a m
//  n=9
  printf("n = %d\n",--n);         //decrementa n en 1, 8, y lo pasa a printf()

  n=8;
  m=n++;        //asigna n(8) a m, despues incrementa n en 1 (9)
//  n=9;
  printf("n = %d",n--);       //pasa n(9) a print(), despues decrementa n

/*  int a=1,b;
  b=a++;              //b vale 1 y a vale 2

  int a=1,b;
  b=++a;                //b vale 2 y a vale 2
  */
}
