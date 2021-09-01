
def estudiantes(valor):
    valor *= 3

variable = 15
estudiantes(variable)

print(variable)

def listas(numero):
    for x in enumerate(numero):
        numero[x] *= 3

otraLista = [50,100,150]
print(listas(otraLista))

listas(otraLista[:])

def estudiantes(valor):
    return valor*3

variable = 15
variable= estudiantes(variable)
print(variable)