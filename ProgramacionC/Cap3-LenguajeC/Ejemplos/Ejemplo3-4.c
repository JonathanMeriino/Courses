/*El lsitado SECESC.C ultiliza secuencias de escape, tales como emitir sonidos(pitidos) en el terminal
dos veces y a continuacion presentar dos retrocesos de espacios en blanco*/

//Mostrar funcionamiento de secuencias de escape
#include<stdio.h>

int main()
{
  char sonidos ='\a';         //Secuencia de escape alarma en sonidos
  char bs='\b';             //alacena secuencia de escape retroceso en bs

  printf("%c %c",sonidos,sonidos );       //emite el sonido dos veces
  printf("ZZ");           //Imprime dos caracteres

  printf("%c%c",bs,bs);      //Mueve el cursor al primer caracter 'Z'
  return 0;
}
