
def funciones(a,b):
    return a*b

print(funciones(2,2))

def funcion2(x,y):
    return  x-y

print(funcion2(y=2,x=1))

def nulos(x=None,i=None):
    if x==None or i==None:
        print("Amigo debes ingresar los dos numeros")
        return
    return x/i

print(nulos(2,2))