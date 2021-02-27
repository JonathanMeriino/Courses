#include <stdio.h>

void cuentaRegresiva(int numeroActual){
//* Si el argumento es menor que 0, ya terminamos
    if (numeroActual < 0)
        return;
    else{
        //* En caso contrario, muestra el numero y ejecutate a ti misma con un decremento
        printf("\n%d",numeroActual);
        cuentaRegresiva(numeroActual-1);
    }
}

int main() {

    int n;
    printf("Numero a empezar\n");
    scanf("%d",&n);
    cuentaRegresiva(n);

    return 0;
}