//Uso de malloc() 
/*
#include <stdio.h>

int main() {

    int *a;
    
    a = malloc(sizeof(int)); //sizeof(int) tamaño de una variable entera



    return 0;
}
*/

/*
int main() {

    int *a;
    a = malloc(sizeof(int));
    
    *a = 5;

    printf("%i",*a);

    return 0;
}
*/
/*
int main() {

    float *a;
    a = malloc(sizeof(float));
    
    *a = 5.54;

    printf("%.2f",*a);

    return 0;
}
*/
int main() {

    char *a;
    a = malloc(sizeof(char));
    
    *a = 'h';

    printf("%c",*a);

    return 0;
}



