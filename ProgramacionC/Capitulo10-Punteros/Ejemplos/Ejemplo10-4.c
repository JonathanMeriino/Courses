/*Un puntrero a una contesta es diferente de un puntero constante. El siguiente ejemplo 
muestra las diferencias

    Este trozo de codigo define cuatro variables:
    un puntero p; un puntero constante op; un puntero pc a una 
    constante y un puntero constante cpc a una constante */

int *p;         //puntero a un int
++(*p);         //incremento del entero *p
++p;            //incrementa un puntero p
int *const cp;      //puntero constante a un int
++(*cp);            //incrementa el entero *cp
++cp;               //no valido: puntero co es constante
const int * pc;     //puntero a una constante int
++(*pc);            //no valido: int * pc es constante
++pc;               //incrementa puntero pc
const int * const cpc;      //puntero constante a constante int 
++(*cpc);             //no valido: int *cpc es constante
++cpc;              //no valido: puntero cpc es constante