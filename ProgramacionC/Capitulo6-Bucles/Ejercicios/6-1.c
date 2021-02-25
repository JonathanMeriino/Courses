//Calculo de la media de seis numeros
#include <stdio.h>
#include <string.h>
int main()
{
    const int TotalNum=6;
    int ContadorNum=0;
    float SumaNum = 0;
    float media;
    
    printf("Introduzca %d numeros\n",TotalNum);
    while (ContadorNum<TotalNum)
    {
        //valores a procesar 
        float numero;
        scanf("%f",&numero);            //Leer el siguiente numero
        SumaNum +=numero;               //añadir valor a Acumulado
        ++ContadorNum;                  //incrementar numeros leidos
    }
    media = SumaNum/ContadorNum;
    printf("Media: %.2f \n",media);
    return 0;
    
}