/*Se desea registrar una estructura PersonaEmpleado que contenga cmo mienbros los datos de una 
persona empleado que a su vez tenga los datos de la fecha de nacimiento. En un programa se muestra
el uso de la estructura persona, se define una funcion para dar entrada a los datos la estructura y otra funcion
para dar salida a los datos de una estructura persona. A la funcion de entrada se transmite por 
direccion (&p) la variable estructura, por lo que el argunmento correspondiente tiene que ser un
puntero (*p) y el acceso a los campos se hace con el selector ->
*/

#include <stdio.h> 
struct fecha
{
    unsigned int dia, mes, anyio;
};
struct persona
{
    char nombre [20];
    unsigned int edad;
    int altura;
    int peso ;
    struct fecha fec;
};
struct persona_empleado
{
    struct persona unapersona;
    unsigned int salario;
    unsigned int horas_por_semana;
};
//prototipos de funciones 
void entrada (struct persona_empleado *p);
void muestra (struct persona_empleado up);

void main()
{
    //define una variable persona-empleado
    struct persona_empleado p;
    //llamada a entrada () transmitiendo la direccion 
    entrada(&p);
    //salida de los datos almacenados
    muestra(p); 
}
void entrada (struct persona_empleado *p)
{
    printf("\nIntrouzca su nombre: ");
    gets(p->unapersona.nombre);
    printf("Introduzca su edad: ");
    scanf("%d",&p->unapersona.edad);
    printf("Introduzca su altura: ");
    scanf("%d",&p->unapersona.altura);
    printf("Indtroduzca su peso: ");
    
}
