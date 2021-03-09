#include <stdio.h>
#include <stdlib.h>

typedef struct Cola{
    int primero;
    int ultimo;
    int tamanio;
    int disponibles;
    int *lista;
}Cola;

Cola crearCola(int tamanio)
{
    Cola c;
    c.primero = 1;
    c.ultimo = 0;
    c.tamanio = tamanio;
    c.disponibles = c.tamanio;

    c.lista =(int *)calloc(c.tamanio,sizeof (int));

    return c;
}

int isEmpty(Cola){
    if((c.primero == c.ultimo+1)&&(c.disponibles==c.tamanio)){
        return 1;
    }return 0;
}

void encolarFinal(Cola *c,int x)
{
    if(c->disponibles==0){
        printf("Ya esta en su maxima capacidad la cola\n");
    }else{
        c->ultimo = (c->ultimo%c->tamanio)+1;
        c->lista[c->ultimo-1] = x;
        c->disponibles--;
    }
}

void encolarInicio(Cola *c, int x){
    if(c->ultimo=0){
        encolarFinal(c,x);
    }else{
        if(c->disponibles==0){
            printf("Ya esta en su maxima capacidad la cola\n");
        }else{
            if(c->primero==1){
                c->primero += c->tamanio-1;
                c->lista[c->primero-1];
                c->disponibles--;
            }else{
               c->primero=(c->primero+c->tamanio)%((c->tamanio)+1);
               c->lista[c->primero-1]=x;
               c->disponibles--;
            }
        }
    }
}
int desencolarInicio(Cola *c){
    if(isEmpty(*c)==1){
        printf("La cola esta vacia\n");
    }else{
        c->disponibles++;
        int aux = c->lista[c->primero-1];
        c->lista[primero-1]=0;
        if(c->primero!=c->ultimo ){
            c->primero=(c->primero%c->tamanio)+1;

        }else{
            c->primero++;
        }if((c->primero)==(c->ultimo+1)){
            *c = crearCola(c->tamanio);
        }
        return aux;
    }

}
int desencolarFina(Cola *c)
{
    if(isEmpty(*c)==1){
        printf("La cola esta vacia\n");
    }else{
        c->disponibles++;
        int aux = c->lista[c->ultimo-1];
        c->lista[c->ultimo-1]=0;
        c->ultimo--;
    }if(c->ultimo==0){
        if(c->primero==(c->ultimo+1)){
            *c =crearCola(c->tamanio);
        }else{
            c->ultimo+=tamanio;
        }
    }if(c->primero==(c->ultimo+1)){
        *c = crearCola(c->tamanio);
    }
    return aux;
}
void mostrarValores(Cola queue){
    for (int i = 0; i < queue.tamanio; ++i) {
        printf("Posicion %d\tvalor %d\n",i+1,queue.lista[i]);

    }

}

void mostrarIndice(Cola queue){
    printf("Primero %d\n",queue.primero);
    printf("Ultimo %d\n",queue.ultimo);
    printf("Disponibles %d\n",queue.disponibles);

}