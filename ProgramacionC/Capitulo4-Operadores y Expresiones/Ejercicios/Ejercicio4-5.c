/*x es una variable entera e Y una variable caracter. Que resultado producira
la sentencia scanf("%d %d ", &x , &y) si la entrada es */
#include <stdio.h>

int main()
{
  int x; char y;

  printf("Inciso a): ");
  scanf("%d %c",&x , &y);        //%c por ser una variable te tipo caracter

  printf("X = %d, Y = %c\n",x,y);

  printf("Inciso b): " );
  scanf("%d %c\n",&x , &y);

  printf("X = %d, Y = %c\n",x,y );

  return 0;
}
