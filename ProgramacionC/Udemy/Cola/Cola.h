//
// Created by leo61 on 07/03/2021.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Cola{
    int primero;
    int ultimo;
    int lista[100];
}Cola;

Cola crearCola(){
    Cola c;
    c.primero = 1;
    c.ultimo = 0;

    return c;
}

isEmpty(Cola c){
    if(c.primero==c.ultimo+1)
            return 1;
    return 0;
}
void encolar(Cola *c,int x)
{
    c->lista[c->ultimo] = x;
    c->ultimo++;
}
int desencolar(Cola *c){
    if(isEmpty(*c)==1){
        printf("La cola esta vacia\n");
    }else{
        int aux = c->lista[c->primero];
        c->primero++;
        if(c->primero==c->ultimo+1){
            *c =crearCola();
        }
        return aux;
    }
}

int firstCola(struct Cola c)
{
    c.primero++;
    return c.lista[c.primero-1];
}