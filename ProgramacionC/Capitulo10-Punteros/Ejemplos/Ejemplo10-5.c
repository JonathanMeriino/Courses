double (*fp) (int n);
float (*p) (int i,int j);
void (*sort)(int *ArrayEnt,unsigned n);
unsigned (*search)(int BuscarClave,int *ArrayEnt,unsigned n);

/*El primer identificaor, fp, apunta a una funcion que devuelve un dipo double y tuene un Unico
parametrode tipo int. El segundo puntero,p, apunta a una funcion que devuelve un tipo float y 
acepta dos parametros de tipo int. El tercer puntero, sort, es un puntero a una funcion que
devuelve un tipo void y toma dos parametros: un punteroo a int y un tipo unsigned. Por ultimo
search es un puntero a una funcion que devuelve a un tipo unsigned y tiene tres parametros: un int,
un puntero a int y un unsigned*/