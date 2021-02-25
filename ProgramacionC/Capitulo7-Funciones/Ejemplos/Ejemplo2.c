//Ejemplo donde se declaran dos funciones y se llaman desde la funcion main()
#include<stdio.h>
void func1(void)
{
  puts("Segunda funcion");
  return;
}
void func2(void)
{
  puts("Tercera funcion");
  return;
}
int main()
{
  puts("Primera funcion llamada main()");
  func1();                                //Segunda funcion llamada
  func2();                                //Tercera funcion llamada
  puts("main se termina");

  return 0;                   //Devuelve control al sistema  
}
