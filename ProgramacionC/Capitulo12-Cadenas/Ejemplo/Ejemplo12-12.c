// Resultados de realizar comparaciones de cadenas 

char cad1[] = "Microsoft C";
char cad2[] = "Microsoft Visual C";

int i;

i= strcmp(cad1,cad2);   //i, toma un valor negativo

strcmp("Waterloo", "Windows") <0    {Devuelve un valor negativo}
strcmp("Martimer", "Mortim") >0     {Devuelve un valor positivo}
strcmp("Jertru","Jertru")   = 0  {Devuelve cero}