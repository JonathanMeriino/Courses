//Realizar el algoritmo de la funcion factorial

//La implementacion de la funcion factorial es

double factorial(int numero)
{
  if(numero>1)
    return numero*factorial(numero-1);
  return 1;
}
