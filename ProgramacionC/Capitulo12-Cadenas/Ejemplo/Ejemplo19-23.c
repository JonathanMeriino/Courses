/* Ejemplo 19: convierte los digitos de una cadena en un valor entero
    char *cadena = "453423";
    int valor;
    valor = atoi (cadena);


    Ejemplo 20: Convierte los digitos de una cadena a un numero de tipo double

    char * cadena = "545.7345";
    double valor ;
    valor = atof(cadena);


    Ejemplo 21: Una cadena que tiene digitos consecutivos se convierte en entero largo

    char *cadena = "45743212";
    long valor;
    valor = atol(cadena);


    Ejemplo 22: Lectura de un entero largo y a continuacion una cadena
    long int k;
    char cad[81];
    printf("Metros cuadrados: "); scanf("%ld",&k);
    

    Ejemplo 23: Busqueda del caracter 'v' en una cadena 
    char cad[81] = "C lenguaje de medio nivel";
    char *cadPtr;
    cadPtr = strchr(cad, 'v');
    */