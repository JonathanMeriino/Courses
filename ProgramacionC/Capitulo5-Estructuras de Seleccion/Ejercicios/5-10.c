/*Escribir un programa que lea tres enteros y emite un mensaje que indique si estan
o no en orden numerico*/
#include <stdio.h>

int main()
{
    float num1,num2,num3;

    printf("Ingresa el valor de los tres numeros: ");
    scanf("%f %f %f", &num1,&num2,&num3);

    if(num1<num2 && num2<num3) 
        printf("Si estan en orden numerico\n");
    else
        printf("No estan en orden numerico\n");  
    
    return 0;
}