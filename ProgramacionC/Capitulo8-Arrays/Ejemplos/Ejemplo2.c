//Define una tabla de discos, rellena la tabla con datos de entrada y muestra por pantalla
    float discos[2][4];
    int fila,col;
    for(fila = 0;fila<2;fila++)
    {
        for(col=0;col<4;col++)
        {
            scanf("%f",&discos[fila][col]);
        }
    }
//Visualizar la tabla
    for(fila=0;fila<2;fila++)
    {
        for(col=0;col<4;col++)
        {
            printf("\n Pts %.1f\n",discos[fila][col]);
        }
    }