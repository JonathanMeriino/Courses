/*Comparar los 7 primeros caracteres de dos cadenas

char cadena1[] = "Turbo C";
char cadena2[] = "Turbo Prolog";
int i;

i = strncmp(cadena1,cadena2,7);

Esta sentencia asigna un numero negativo a la variable i, ya que "Turbo C" es menor que "Turbo
P". En el caso de comparar los 5 primeros caracteres:

i = strncmp(cadena1,cadena2,5);

esta sentencia asigna un cero a la variable i, ya que "Turbo" es igual que "Turbo".*/