
def estudiante():
    return "Mensaje 1"

print(estudiante())

def estudiante():
    return [5,6,4,7]

print(estudiante())
print(estudiante()[0:2])

def estudiante():
    return "Jonathan","Merino",10,[5,6,4,7]

print(estudiante())

a,b,c,d = estudiante()

print(a)
print(b)
print(c)
print(d)

def multiplicacion (i,x):
    return i*x

print(multiplicacion(5,5))

variable = multiplicacion(5,5)

print(variable)