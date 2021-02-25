/*Supongamos un puntero p a una funcion tal como
    float (*p) (int i, int j)

a continuacion se puede asignar la direccion de la funcion ejemplo:

    float ejemplo(int i,int j)
    {
        return 3.14159 * i*i+j;
    }

al puntero p escribiendo
    p = ejemplo;

    Despues de esta asignaicon se puede escribir la siguiente llamada a la funcion
    (*p)(12,45)

    su efecto es el mismo que 

    ejemplo(12,45)

    Tambien se puede omitir el asterisco(asi como los parantesis) en la llamada(*p)(12,45):
    conviertiendosa en esta otra llamada
    p(12,45) */