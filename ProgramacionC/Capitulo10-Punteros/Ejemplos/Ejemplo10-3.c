/* si p apunta a la letra A en el alfabeto, si se escibe
        p= p+1 ;
    entonces p apunrta a la letra B
    Se puede utilizar esta tecnica para explorar cada elemento de alfabeto sin utilizar una varibale de 
    indice. Un ejemplo puede ser 

        p = &alfabeto[0];
        for(i = 0;i<strlen(alfabeto);i++)
        {
            printf("%c",*p);
            p = p+1:
        };

    Las sentencias del anterior bucle se pueden sustituir por
        printf("%c",*p++);