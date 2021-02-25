/* Comparacion de los 5 primeros caracteres. sin distincion entre mayusculas y minusculas

char cadena1[] = "Turbo C";
char cadena2[] = "Turbo C";
int i;

i = strnicmp(cadena1,cadena2,5);

Esta sentencia asigna 0 a la variable i, ya que las cadenas "Turbo" y "Turbo" difieren solo en que
son mayusculas o minusculas */