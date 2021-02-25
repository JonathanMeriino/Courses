/*En este ejemplo se declara el tipo estructura t_persona, que se asocia con el tipo persona para
facilidad de escritura. Un array de esta estructura se inicializa con campos al azar y se muestra por 
pantalla */ 

#include <stdio.h>

struct t_persona
{
    char nombre[30];
    int edad;
    int altura;
    int peso;
};

typedef struct t_persona persona;

void mostrar_persona(persona *ptr);

void main()
{
    int i;
    persona empleados[] = {
        {"Morti er, Pepe",47,182,85},
        {"Garcia, Luis",39,170,75},
        {"Jimenez, Tomas",18,175,80} };
       
        persona *p;         //puntero a estructura
        p=empleados;
    
        for(i=0; i<3 ; i++,p++)
            mostrar_persona(p);
            
}
void mostrar_persona(persona *ptr)
{
    printf("\nNombre: %s",ptr ->nombre);
    printf("\tEdad: %d",ptr->edad);
    printf("\tAltura: %d",ptr->altura);
    printf("\tPeso: %d\n",ptr->peso);    
}