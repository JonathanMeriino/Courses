//Escribir un programa que visualice un triangulo isosceles
#include <stdio.h>
//constantes globales
const int num_lineas=5;
const char blanco =" ";
const char asterisco = '*';

void main()
{
    int fila, blancos,cuenta_as;
    puts(" ");          //deja una linea de separacion
    //bucle externo: dibuja cada linea
    for(fila=1;fila<=num_lineas;fila++)
    {
        putchar('\t');
        //primer bucle interno: escribe espacios
        for(blancos=num_lineas-fila;blancos>0;blancos--)
            putchar(blanco);
        for(cuenta_as=1;cuenta_as<2*fila;cuenta_as++)
            putchar(asterisco);
        //terminar linea
        puts(" ");
    }   //fin del bucle externo
}