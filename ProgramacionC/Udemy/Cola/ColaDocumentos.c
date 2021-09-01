#include "ColaDocumentos.h

int main()
{
    int cantidadDocumentos;
    printf("Cuantos documentos quieres registrar?\n");
    fflush(stdin);
    scanf("%d",&cantidadDocumentos);

    Documento *apuntadorDocumento = (Documento *)malloc(cantidadDocumentos*sizeof(Documento));
    Cola DocumentoCola= crearCola();

    //llenamos los datos de los documentos
    for (int i = 0; i < cantidadDocumentos; ++i) {
        printf("Escribe el nombre del documento[i]\n",i);
        fflush(stdin);
        fgets(apuntadorDocumento[i].nombre,30,stdin);

        printf("Escribe el nombre del autor[i]\n",i);
        fflush(stdin);
        fgets(apuntadorDocumento[i].autor,30,stdin);

        printf("Escribe el numero de paginas del documento[i]\n",i);
        fflush(stdin);
        scanf("%d",&apuntadorDocumentos[i].numeroPaginas);

        printf("Escribe el numero de paginas del documento[i]\n",i);
        fflush(stdin);
        scanf("%d",&apuntadorDocumentos[i].tamanio);

        encolar(&DocumentoCola,apuntadorDocumento[i]);

    }

    printf("***Comenzado la impresion***\n");

    float total= 0.0;

    for (int i = 0; i < cantidadDocumentos; ++i) {
        Documento ColaRegresada = desencolar(&DocumentoCola);
        printf("Nomnre: %s \n",ColaRegresada.nombre);
        float tiempoSegundo = (ColaRegresada.numeroPaginas)*3;
        (tiempoSegundo) /=60;
        printf("Tiempo de impresion(minutos): %.2f\n,tiempoSegundo);
        total += tiempoSegundo;
    }
    printf("Tiempo total de la impresion: %.2f\n",total);

    return 0;
}