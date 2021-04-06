
def argu(*tu):
    for tus in tu:
        print(tus)

print(argu('leo','merino','estudiantes',10,[1,2,3]))

def nombre_diccionario(**lo):
    for x in lo:
        print(x," ",lo[x])

print(nombre_diccionario(alvaro= 'Leo',estudiantes='genios',calificaciones=[7,8,9]))

def nombre_diccionario(*tu,**lo):
    b = 0
    for tus in tu:
        b+=tus
    print(b)
    for x in lo:
        print(x," ",lo[x])

print(nombre_diccionario(1,2,3,4,alvaro= 'Leo',estudiantes='genios',calificaciones=[7,8,9]))