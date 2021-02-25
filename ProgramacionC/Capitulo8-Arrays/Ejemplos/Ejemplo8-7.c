/*La función intercambio intercambia los valores de dos variables x e y
El algoritmo de intercambio utiliza una variable auxiliar*/
aux=x;
x=y;
y=aux;
/*La función intercambio sirve para intercambiar dos elementos x e y que se pasan a ella. Al tener
que pasar por referencia, los argumentos de la función son punteros.*/
void intercambio(float* x , float* y)
{
    float aux;
    aux = *x;
    *x =* y;
    *y = aux;
}
//Una llamada a esta función:
    float r , v;
    intercambio(&r,&v) ;
