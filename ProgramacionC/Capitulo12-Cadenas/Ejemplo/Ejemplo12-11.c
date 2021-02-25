//concatenar 4 caracteres

char cad1[81] = "Hola soy yo";
char cad2[41] = "Luis Merino";
strncat (cad1, cad2, 4);

/* La variable cad 1 contiene ahora "Hola soy yo Luis".
    Ni la funcion strcar(), mi strcat() comprueba que la cadena destino tenga suficiente espacio
    para la cadena resultante. Por ejemplo: */ 

    char s1[] = "ABCDEFGH"; //reserva espacio para 8+1 caracteres
    char s2[] = "XYZ";         // reserva espacio para 3+1 caracteres 
    strcat(s1,s2);             //produce resultado extraños por no haber espacio para la concatenacion s1 con s2