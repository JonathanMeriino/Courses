//Escribir una función que calcule el máximo de los primeros n elementos de un array especificado.

double maximo(const double a[],int n)
{    
    double mx;
    int i;
    mx=a[0];
    for (i=1;i<n;i++)
        mx = (a[i]>mx?a[i]:mx);
    return mx;
}