double (*fp[3]) (int n);
void (*ordenar[MAX-ORD]) (int * ArrayEnt, unsigned n);

/* fp apunta a un array de funciones: cada miembro devuelve a un valr double y tiene un unico parametro
de tipo int, ordenar es un puntero a un array de funciones; cada miembro devuelve un tipo void y
toma dos parametros: un puntero a int y un unsigned */