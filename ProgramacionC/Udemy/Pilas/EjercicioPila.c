#include "Pila.h"

int main()
{
//creamos tres pilas con la funcion crear pila

    Pila PilaUsuario = crearPila();
    Pila PilaUsuario = crearPila();
    Pila PilaUsuario = crearPila();

    //creamos este bucle para agregar los valores a la pila usuario
    for (int i = 0; i < 8; ++i) {
        int valor;

        printf("Escribe el valor [%d] de la Pila\n",i);
        scanf("%d",&valor);
        fflush(stdin);
        Push(&PilaUsuario,valor);
    }

    //Determinamos el menor de los datos ingresados por el usuario

    while (isEmpty(PilaUsuario)==0)
    {
        Push(&PilaMenor,pop(&PilaUsuario));
        while (isEmpty(PilaUsuario)==0)
        {
            if(top(PilaUsuario)>top(PilaMenor)){
                Push(&PilaAuxiliar,pop(&PilaUsuario));
            }else{
                Push(PilaAuxiliar,pop(&PilaMenor));
                Push(PilaMenor,pop(&PilaUsuario));
            }
        }
    }
    printf("El valor menor de los ingresados es el %d\n",pop(&PilaMenor));
    return 0;

}
