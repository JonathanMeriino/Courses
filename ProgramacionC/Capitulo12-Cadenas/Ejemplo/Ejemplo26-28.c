/*
Ejemplo 26: Busqueda de la primera posicion del caracter 'd' o 'w' en una cadena
    char cadena[] = "Los manolos de Carchelejo";
    int i;
    i = strcspn(cadena,"dw");

Ejemplo 27: Encuentra la direccion en cad del primer caracter encontrado que pertenezca a subcad.
    char *cad = "Hello Dolly, hey Julio";
    char *subcad = "hy";
    char *ptr;

    ptr = strpbrk(cad, subcad);
    printf("\n%s\n",ptr);

Ejemplo 28: Busqueda de la cadena "456" en cad1
    char *cad1 = "123456789";
    char *cad2 = "456";
    char *resultado;

    resultado = strstr(cad1, cad2);
    printf("\n%s\n", resultado);