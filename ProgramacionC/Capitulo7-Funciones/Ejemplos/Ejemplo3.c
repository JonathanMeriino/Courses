/*Se describe una funcion area() de rectangulo. En la funcion main() se llama a entrada()
para pedir la base y la altura; a continuacion se llama a la funcion area ().*/
#include <stdio.h>

float area_rectangulo(float b,float a); //declaracion
float entrada();        //prototipo o declaracion

int main()
{
  float b,h;
  printf("\n Base del rectangulo: " );
  b=entrada();
  printf("\n Altura del rectangulo: " );
  h=entrada();
  printf("\n Area del rectangulo: %.2f",area_rectangulo(b,h));

  return 0;
}
//Devuelve numero positivo
float entrada()
{
  float m;
  do{
    scanf("%f",&m);
  }while(m<=0.0);
  return m;
}
//calcular el area del rectangulo
float area_rectangulo(float b,float a)
{
  return(b*a);
}
