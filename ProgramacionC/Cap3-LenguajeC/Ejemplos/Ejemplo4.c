//Distancia a la luna en kilometros
#include <stdio.h>
int main()
{
  const int luna=238857;    //distancia en millas
  float luna_kilo;
  printf("Distancia a la Luna %d millas\n",luna );
  luna_kilo = luna*1.609;     //1 milla = 1.609 kilometros
  printf("En kilometros es %fkm.\n",luna_kilo);
  return 0;

}
