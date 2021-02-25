/*El siguiente ejemplo de una función de cadena que convierte
los caracteres de sus argumentos a mayúsculas, muestra el paso de parámetros tipo cadena.*/
void conviertemayus(char cad[])
{   
    int i =0;
    int intervalo = 'a'-'A';
    while (cad[i])
    {
    cad[i]=(cad[i]>='a' & & cad[i]<='z') ? cad[i]-intervalo: cad[i];
    i++;
    }
}
