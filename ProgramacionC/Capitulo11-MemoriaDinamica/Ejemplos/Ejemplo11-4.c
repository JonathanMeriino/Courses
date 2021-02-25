//En este ejemplo se reserva memoria para un array de 10 estructuras: despues se libera la memoria reservada

    struct gato *pgato;         //declara puntero a la estructura gato

    pgato = (struct gato*) malloc (10*sizeof(struct gato));

    if(pgato == NULL)
        puts("Memoria agotada");
    else{
        ...
        free(pgato);    //liberar memoria asignada a pgato
    }